#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*节点设计、初始化空链表、创建新节点、增删节点、链表遍历、销毁链表*/
typedef int DataType;

// 节点设计
typedef struct __node
{
    DataType Data; // 数据域：用来存放数据的
    // 指针域
    struct __node *Next; // 后继指针，指向下一个节点
    struct __node *Prev; // 前驱指针，指向前一个节点
} Node, *P_Node;

// 链表初始化，创建一个空的头节点
P_Node ListInit(void)
{
    P_Node head = (P_Node)malloc(sizeof(Node));
    if (head == NULL)
    {
        printf("双向循环链表初始化申请内训失败！\n");
    }
    // 对于双向循环链表来讲，头结点的前驱指针要指向自己
    // 后续指针要指向自己，达到一个（空）闭环
    head->Next = head;
    head->Prev = head;
}

// 创建（双向循环链表）新节点的函数
P_Node NewNode(DataType Data)
{
    // 给新的节点申请内存空间，所以你的sizeof一定要计算节点大小，而不是数据
    P_Node New = calloc(1, sizeof(Node));

    if (New == NULL)
    {
        printf("双向循环链表初始化申请内训失败！\n");
    }
    // 这里要sizeof你要放的数据的大小，而不是整个节点
    memcpy(&New->Data, &Data, sizeof(Data));

    New->Next = New;
    New->Prev = New;

    return New;
}

// 通用插入函数：在Prev节点和Next节点之间插入新节点New
void Add2List(P_Node Prev, P_Node New, P_Node Next)
{
    Prev->Next = New; // 前驱节点的后继指向新节点
    New->Next = Next; // 新节点的后继指向后继节点

    Next->Prev = New; // 后继节点的前驱指向新节点
    New->Prev = Prev; // 新节点的前驱指向前驱节点

    return;
}

// 头插法
void HeadAddNode(P_Node head, P_Node New)
{
    New->Next = head->Next;
    New->Prev = head;
    head->Next->Prev = New;
    head->Next = New;

    return;
}
// 尾插法
void TailAddNode(P_Node head, P_Node New)
{
    New->Prev = head->Prev;
    New->Next = head;
    head->Prev->Next = New;
    head->Prev = New;
    return;
}

// 按位置插入
void AddFromListByPos(P_Node head, P_Node NewData, int Pos)
{
    if (head->Next == head)
    {
        printf("链表为空，无法删除...\n");
        return;
    }
    int i = 0;
    P_Node tmp = head;
    for (; i < Pos && tmp->Next != head; i++)
    {
        tmp = tmp->Next;
    }

    // new的后继指针指向tmp；
    NewData->Next = tmp;
    // new的前驱指针指向tmp的prev；
    NewData->Prev = tmp->Prev;
    // tmp的prev->next指向new
    tmp->Prev->Next = NewData;
    // tmp的prev指向new
    tmp->Prev = NewData;

    return;
}

//链表内节点位置交换
void SwapNode(P_Node A_Node,P_Node B_Node)
{
    P_Node tmp;
    //第一步
    //将B的指向全部赋值给tmp，指向B的全都指向tmp
    //让tmp和B等价
    tmp->Prev=B_Node->Prev;
    tmp->Next=B_Node->Next;
    B_Node->Prev->Next=tmp;
    B_Node->Next->Prev=tmp;
    //第二步
    //将A的指向全都赋值给B，指向A的全都指向B
    //让B和A等价
    B_Node->Prev=A_Node->Prev;
    B_Node->Next=A_Node->Next;
    A_Node->Prev->Next=B_Node;
    A_Node->Next->Prev=B_Node;
    //第三步
    //将tmp的指向全都赋值给A，指向tmp的全都指向A
    //让A和tmp等价
    A_Node->Prev=tmp->Prev;
    A_Node->Next=tmp->Next;
    tmp->Prev->Next=A_Node;
    tmp->Next->Prev=A_Node;

    return ;
}

//按位置删除
void DelFormListByPos(P_Node DelData)
{
    P_Node prev=DelData->Prev;
    P_Node next=DelData->Next;

    prev->Next=next;
    next->Prev=prev;

    free(DelData);

}


//新旧节点交换
void RaccoonForAPrince(P_Node new,P_Node old)
{
    new->Next=old->Next;
    new->Prev=old->Prev;
    old->Prev->Next=new;
    old->Next->Prev=new;
    free(old);
    return;
}

//排序链表
void SortList(P_Node head)
{
    if (head->Next == head)
    {
        printf("链表为空，无法排序...\n");
        return;
    }




}
//正向遍历
void NextDisplay(P_Node head)
{
    P_Node tmp = head;
    while (tmp->Next != head)
    {
        tmp = tmp->Next;
        printf("链表当中的数据是%d\n", tmp->Data);
    }
    // for(P_Node tmp=head->Next;tmp!=head;tmp=tmp->Next)
    // {
    //     printf("链表当中的数据是%d\n",tmp->Data);
    // }
    return;
}

//反向遍历
void PrevDisplay(P_Node head)
{
    P_Node tmp=head;
    while (tmp->Prev!=head)
    {
        tmp=tmp->Prev;
        printf("链表当中的数据是%d\n", tmp->Data);
    }
    return;
}

//销毁链表
void DestroyList(P_Node head)
{
    P_Node tmp = NULL;
    while (head->Next != head)
    {
        tmp = head;
        head = head->Next;
        free(tmp);
    }
    return;
}

int main(int argc, char const *argv[])
{
    P_Node head = ListInit();
    P_Node New1 = NewNode(2);
    P_Node New2 = NewNode(4);
    P_Node New3 = NewNode(6);
    P_Node New4 = NewNode(8);
    HeadAddNode(head, New1); // head:2
    HeadAddNode(head, New2); // head:4,2
    TailAddNode(head, New3); // head:4,2,6
    AddFromListByPos(head,New4,3);
    NextDisplay(head);       // head:4,2,8,6
    printf("------------------------\n");

    SwapNode(New4,New1);

    PrevDisplay(head);      // head:8,2,6,4
    return 0;
}
