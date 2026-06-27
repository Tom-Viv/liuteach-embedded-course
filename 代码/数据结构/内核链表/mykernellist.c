#include "mykernellist.h"



// 链表初始化，创建一个空的头节点
// P_Node ListInit(void)
// {
//     P_Node head = (P_Node)malloc(sizeof(Node));
//     if (head == NULL)
//     {
//         printf("双向循环链表初始化申请内训失败！\n");
//     }
//     // 对于双向循环链表来讲，头结点的前驱指针要指向自己
//     // 后续指针要指向自己，达到一个（空）闭环
//     head->Next = head;
//     head->Prev = head;
// }

// // 创建（双向循环链表）新节点的函数
// P_Node NewNode(DataType Data)
// {
//     // 给新的节点申请内训空间，所以你的sizeof一定要计算节点大小，而不是数据
//     P_Node New = calloc(1, sizeof(Node));

//     if (New == NULL)
//     {
//         printf("双向循环链表初始化申请内训失败！\n");
//     }
//     // 这里要sizeof你要放的数据的大小，而不是整个节点
//     memcpy(&New->Data, &Data, sizeof(Data));

//     New->Next = New;
//     New->Prev = New;

//     return New;
// }

// // 通用插入函数：在Prev节点和Next节点之间插入新节点New
// void Add2List(P_Node Prev, P_Node New, P_Node Next)
// {
//     Prev->Next = New; // 前驱节点的后继指向新节点
//     New->Next = Next; // 新节点的后继指向后继节点

//     Next->Prev = New; // 后继节点的前驱指向新节点
//     New->Prev = Prev; // 新节点的前驱指向前驱节点

//     return;
// }

// // 头插法
// void HeadAddNode(P_Node head, P_Node New)
// {
//     New->Next = head->Next;
//     New->Prev = head;
//     head->Next->Prev = New;
//     head->Next = New;

//     return;
// }
// // 尾插法
// void TailAddNode(P_Node head, P_Node New)
// {
//     New->Prev = head->Prev;
//     New->Next = head;
//     head->Prev->Next = New;
//     head->Prev = New;
//     return;
// }

// // 按位置插入
// void AddFromListByPos(P_Node head, P_Node NewData, int Pos)
// {
//     if (head->Next == head)
//     {
//         printf("链表为空，无法删除...\n");
//         return;
//     }
//     int i = 1;
//     P_Node tmp = head;
//     for (; i < Pos && tmp->Next != head; i++)
//     {
//         tmp = tmp->Next;
//     }

//     // new的后继指针指向tmp；
//     NewData->Next = tmp;
//     // new的前驱指针指向tmp的prev；
//     NewData->Prev = tmp->Prev;
//     // tmp的prev->next指向new
//     tmp->Prev->Next = NewData;
//     // tmp的prev指向new
//     tmp->Prev = NewData;

//     return;
// }

// //按位置删除
// void DelFormListByPos(P_Node DelData)
// {
//     P_Node prev=DelData->Prev;
//     P_Node next=DelData->Next;

//     prev->Next=next;
//     next->Prev=prev;

//     free(DelData);

// }
// //正向遍历
// void NextDisplay(P_Node head)
// {
//     P_Node tmp = head;
//     while (tmp->Next != head)
//     {
//         tmp = tmp->Next;
//         printf("链表当中的数据是%d\n", tmp->Data);
//     }
//     // for(P_Node tmp=head->Next;tmp!=head;tmp=tmp->Next)
//     // {
//     //     printf("链表当中的数据是%d\n",tmp->Data);
//     // }
//     return;
// }

// //反向遍历
// void PrevDisplay(P_Node head)
// {
//     P_Node tmp=head;
//     while (tmp->Prev!=head)
//     {
//         tmp=tmp->Prev;
//         printf("链表当中的数据是%d\n", tmp->Data);
//     }
//     return;
// }

// //销毁链表
// void DestroyList(P_Node head)
// {
//     P_Node tmp = NULL;
//     while (head->Next != head)
//     {
//         tmp = head;
//         head = head->Next;
//         free(tmp);
//     }
//     return;
// }

int main(int argc, char const *argv[])
{

    return 0;
}
