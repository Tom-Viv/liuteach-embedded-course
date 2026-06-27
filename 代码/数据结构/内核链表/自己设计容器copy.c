#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h> // 包含标准offsetof宏

// 通用数据域
typedef struct __my_data
{
    void *datatype; // 指向实际数据的指针
    size_t size;    // 数据的字节大小
} Database, *P_Database;

// 侵入式指针域（Linux内核链表风格）
typedef struct __my_pointer
{
    struct __my_pointer *prev;
    struct __my_pointer *next;
} Pointer, *P_Pointer;

// 完整节点：数据域 + 指针域
typedef struct __my_container
{   
    Database data;
    Pointer ptr; // 注意：这里直接嵌入结构体，不是指针！
} Container, *P_Container;

// 正确的container_of宏（标准实现）
#define container_of(ptr, type, member) ({ \
    const typeof( ((type *)0)->member ) *__mptr = (ptr); \
    (type *)( (char *)__mptr - offsetof(type, member) ); \
})

// 初始化头节点（头节点不存储数据）
P_Container Container_Init(void)
{
    P_Container head = (P_Container)malloc(sizeof(Container));
    if (head == NULL)
    {
        printf("申请头节点内存失败！\n");
        return NULL;
    }

    // 头节点数据域置空（不存储数据）
    head->data.datatype = NULL;
    head->data.size = 0;

    // 初始化双向循环链表指针
    head->ptr.prev = &head->ptr;
    head->ptr.next = &head->ptr;

    return head;
}

// 创建新节点（支持任意类型数据）
P_Container NewNode(void *new_data, size_t size)
{
    P_Container new_node = (P_Container)malloc(sizeof(Container));
    if (new_node == NULL)
    {
        printf("申请新节点内存失败！\n");
        return NULL;
    }

    // 为数据申请内存（使用传入的size，不是硬编码）
    new_node->data.datatype = malloc(size);
    if (new_node->data.datatype == NULL)
    {
        printf("申请数据域内存失败！\n");
        free(new_node);
        return NULL;
    }

    // 复制数据
    memcpy(new_node->data.datatype, new_data, size);
    new_node->data.size = size;

    // 初始化新节点指针
    new_node->ptr.prev = &new_node->ptr;
    new_node->ptr.next = &new_node->ptr;

    return new_node;
}

// 头插法（标准双向循环链表插入）
void AddList(P_Container head, P_Container new_node)
{
    if (head == NULL || new_node == NULL)
        return;

    // 插入到head和head->next之间
    new_node->ptr.next = head->ptr.next;
    new_node->ptr.prev = &head->ptr;
    head->ptr.next->prev = &new_node->ptr;
    head->ptr.next = &new_node->ptr;
}

// 正向遍历（正确实现，不修改链表）
void Display(P_Container head)
{
    if (head == NULL)
        return;

    // 游标从第一个数据节点开始
    P_Pointer pos = head->ptr.next;

    // 循环直到回到头节点
    while (pos != &head->ptr)
    {
        // 从指针域获取完整节点
        P_Container node = container_of(pos, Container, ptr);
        
        // 这里假设数据是int类型，通用版本可通过回调函数处理
        printf("节点地址: %p, 数据: %d\n", node, *(int *)node->data.datatype);

        // 移动到下一个节点
        pos = pos->next;
    }
}

// 释放链表内存（避免内存泄漏）
void FreeList(P_Container head)
{
    if (head == NULL)
        return;

    P_Pointer pos = head->ptr.next;
    while (pos != &head->ptr)
    {
        P_Pointer next = pos->next;
        P_Container node = container_of(pos, Container, ptr);
        free(node->data.datatype);
        free(node);
        pos = next;
    }

    // 最后释放头节点
    free(head);
}

int main(int argc, char const *argv[])
{
    // 初始化头节点（无参数）
    P_Container my_container = Container_Init();
    if (my_container == NULL)
        return -1;

    // 创建4个节点
    for (int i = 0; i < 4; i++)
    {
        P_Container node = NewNode(&i, sizeof(int));
        if (node != NULL)
        {
            AddList(my_container, node);
            printf("创建节点成功: %d\n", *(int *)node->data.datatype);
        }
    }

    printf("\n正向遍历链表:\n");
    Display(my_container);

    // 释放内存
    FreeList(my_container);

    return 0;
}