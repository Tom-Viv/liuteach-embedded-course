#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*节点设计、初始化空链表、创建新节点、增删节点、链表遍历、销毁链表*/

typedef int DataType;

// 节点设计
typedef struct __node
{
    DataType Data;       // 数据域：用来存放数据的
    struct __node *Next; // 指针域: 用来指向下一个节点的
} Node, *P_Node;

// 有头结点的单向循环链表初始化
P_Node InitList(void)
{
    // 创建数据为空的头节点
    P_Node head = (P_Node)malloc(sizeof(Node));

    if (head == NULL)
    {
        printf("创建头结点申请内存失败，请稍后再试！\n");
        return NULL;
    }
    // 头结点的后驱指针指向头，避免野指针，也是因为现在是空链表，没有下一个指向，只能指向空
    head->Next = head;

    // 返回头结点的地址
    return head;
}

// 创建新节点
P_Node NewNode(DataType Data)
{
    // 创建新节点,calloc=malloc+memset
    P_Node NewNode = (P_Node)calloc(1, sizeof(Node));
    if (NewNode == NULL)
    {
        printf("创建新节点申请内存失败，请稍后再试！\n");
        return NULL;
    }

    memcpy(&NewNode->Data, &Data, sizeof(DataType));
    NewNode->Next = NULL;

    return NewNode;
}

// 插入操作（头插法）
void HeadAddList(P_Node head, P_Node NewNode)
{
    NewNode->Next = head->Next;
    head->Next = NewNode;
    return;
}
// 尾插法
void TailAddList(P_Node head, P_Node NewNode)
{
    P_Node tmp = head;
    // 找到tmp的后继指针指向头的位置
    for (; tmp->Next != head; tmp = tmp->Next)
        ;

    // 让tmp的后继指针指向NewNode
    tmp->Next = NewNode;
    // 让NewNode的后继指针指向头
    NewNode->Next = head;

    return;
}

// 遍历链表
void Display(P_Node head)
{
    if (head->Next == head)
    {
        printf("此时链表为空！\n");
        return;
    }

    P_Node tmp = head->Next;

    // for (; tmp != head; tmp = tmp->Next)
    // {
    //     printf("%d\n", tmp->Data);
    // }
    while(tmp != head)
    {
        printf("%d\n", tmp->Data);
        tmp = tmp->Next;
        
    }

    // P_Node tmp = head;
    // do
    // {
    //     tmp = tmp->Next;
    //     printf("%d\n", tmp->Data);
    // } while (tmp->Next!= head);

    return;
}

// 按值去删除链表的某一个节点
void DeleteFromListByValue(P_Node head, DataType Data)
{
    if (head == NULL || head->Next == head)
    {
        printf("链表为空，无法删除...\n");
        return;
    }

    P_Node tmp = head;

    while (tmp->Next != head && tmp->Next->Data != Data)
    {
        tmp = tmp->Next;
    }
    if (tmp->Next == head)
    {
        printf("未找到指定的数据，删除失败！！！\n");
    }

    P_Node tmp2;
    tmp2 = tmp->Next;
    tmp->Next = tmp2->Next;
    free(tmp2);

    return;
}

// 按位置删除
void DeleteFromListByPos(P_Node head, int Pos)
{
    if (head == NULL || head->Next == head)
    {
        printf("链表为空，无法删除...\n");
        return;
    }
    int i = 1;
    P_Node tmp = head;
    for (; i < Pos - 1 && tmp->Next != head; i++)
    {
        tmp = tmp->Next;
    }

    P_Node tmp2;
    tmp2 = tmp->Next;
    tmp->Next = tmp2->Next;
    free(tmp2);
    return;
}

// 按值去查找链表的某一个节点
P_Node FindFromListByValue(P_Node head, DataType Data)
{
    if (head == NULL || head->Next == head)
    {
        printf("链表为空，无法查找...\n");
        return NULL;
    }
    P_Node tmp = head;

    while (tmp->Next != head && tmp->Next->Data != Data)
    {
        tmp = tmp->Next;
    }
    if (tmp->Next == head)
    {
        printf("未找到指定的数据！！！\n");
    }
    return tmp->Next;
}

// 按位置查找
P_Node FindFromListByPos(P_Node head, int Pos)
{
    if (head == NULL || head->Next == head)
    {
        printf("链表为空，无法查找...\n");
        return NULL;
    }
    int i = 1;
    P_Node tmp = head;
    for (; i < Pos && tmp->Next != head; i++)
    {
        tmp = tmp->Next;
    }

    return tmp;
}

// 按位置修改
P_Node ChangeListByPos(P_Node head, DataType Data, int Pos)
{
    if (head == NULL || head->Next == head)
    {
        printf("链表为空，无法查找...\n");
        return NULL;
    }
    int i = 1;
    P_Node tmp = head;
    for (; i < Pos && tmp->Next != head; i++)
    {
        tmp = tmp->Next;
    }
    tmp->Data = Data;

    memcpy(&tmp->Data, &Data, sizeof(Data));

    return tmp;
}

// 按值去查找链表的某一个节点
P_Node ChangeFromListByValue(P_Node head, DataType Data, DataType ChangeData)
{
    if (head == NULL || head->Next == head)
    {
        printf("链表为空，无法查找...\n");
        return NULL;
    }
    P_Node tmp = head;

    while (tmp->Next != head && tmp->Next->Data != Data)
    {
        tmp = tmp->Next;
    }
    if (tmp->Next == head)
    {
        printf("未找到指定的数据！！！\n");
    }
    tmp->Next->Data = ChangeData;
    return tmp->Next;
}

// 销毁链表
void DestroyList(P_Node head)
{
    P_Node tmp = NULL;
    while (head != head)
    {
        tmp = head;
        head = head->Next;
        free(tmp);
    }
    return;
}

int main(int argc, char const *argv[])
{
    P_Node head = InitList();
    P_Node New1 = NewNode(8);
    P_Node New2 = NewNode(7);
    P_Node New3 = NewNode(9);
    HeadAddList(head, New1);
    HeadAddList(head, New2);
    TailAddList(head, New3);
    Display(head);
    printf("--------------------------------------\n");
    DeleteFromListByPos(head, 2);
    Display(head);

    P_Node Find = FindFromListByPos(head, 2);
    printf("按位置查找到的值是%d\n", Find->Data);

    ChangeListByPos(head, 10, 2);
    printf("按位置查找到的值是%d\n", Find->Data);

    ChangeFromListByValue(head, 10, 100);
    Find = FindFromListByValue(head, 100);
    printf("按位置查找到的值是%d\n", Find->Data);
    return 0;
}
