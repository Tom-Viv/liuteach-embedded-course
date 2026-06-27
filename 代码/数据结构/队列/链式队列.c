#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//给int取别名，int和Datatype都可以用来定义变量
typedef int Datatype;

//设计节点
typedef struct __queue_node
{
    //数据域
    Datatype Data;
    //指针域
    struct __queue_node *next;
}QueueNode,*P_QueueNode;

//管理链式表的结构体
typedef struct __queue_list
{
    unsigned int capacity;      //队列的总容量
    P_QueueNode front;          //队列的队头指针
    P_QueueNode rear;           //队列的队尾指针

}LinKQueue, *P_LinkQueue;

//初始化链式队列
P_LinkQueue LinkQueueInit(void)
{
    P_LinkQueue ptr_linkqueue=(P_LinkQueue)malloc(sizeof(LinKQueue));
    if(ptr_linkqueue==NULL)
    {
        printf("申请队列的管理结构体内存失败！！！\n");
        return NULL;
    }
    // 初始化管理结构体成员
    //最开始的时候没有节点，管理结构体的对头队尾指针指向空
    ptr_linkqueue->front=NULL;
    ptr_linkqueue->rear=NULL;
    //因为没有节点，所以容量等于0；
    ptr_linkqueue->capacity=0;
    return ptr_linkqueue;
}

//给链式队列申请新的节点
P_QueueNode NewQueueNode(Datatype Data)
{
    P_QueueNode new=calloc(1, sizeof(LinKQueue));
    if(new==NULL)
    {
        printf("申请队列的节点失败！！！\n");
        return NULL;
    }
    memcpy(&new->Data,&Data,sizeof(Datatype));
    new->next=NULL;
}

/// @brief 判断链式队列是否为空
/// @param P_LinkQueue Ctrl 
/// @return 返回式为true，说明队列为空，
bool isQueueEmpty(P_LinkQueue Ctrl)
{
    return Ctrl->capacity == 0;
}
//入队操作
void InLinkQueue(P_LinkQueue Ctrl,P_QueueNode NewNode)
{
    //如果队列为空的情况下，队列的头指针和尾指针都指向这一个元素
    if(isQueueEmpty(Ctrl))
    {
        Ctrl->front=NewNode;
        Ctrl->rear=NewNode;
        //更新队列的容量大小
        Ctrl->capacity++;
    }
    //不为空的情况下，队列的尾指针指向的节点的后继指针，指向新的节点
    //队列的尾指针指向新的节点
    else
    {
        Ctrl->rear->next=NewNode;
        Ctrl->rear=NewNode;
        Ctrl->capacity++;
    }
    return;
}

//出栈操作
Datatype OutLinkQueue(P_LinkQueue Ctrl)
{
    //调用我们自己编写的判断是否为空的函数
    if(isQueueEmpty(Ctrl) )
    {
        printf("此时的队列为空！！！\n");
        return -1;
    }
    //定义一个临时的指向队头节点的指针，去指向队头
    P_QueueNode del=Ctrl->front;
    //把队头元素里面的数据域拿出来
    Datatype tmp=del->Data;
    //队头指针向后移动,那最开始指向的元素就已经不是队头了
    Ctrl->front=del->next;
    // 如果出队后队列为空，队尾指针也置为NULL
    if (Ctrl->front == NULL)
    {
        Ctrl->rear = NULL;
    }
    //队列内元素少了一个，所以要--
    Ctrl->capacity--;
    //把出队列的元素给释放掉，避免内存泄露
    free(del);
    //返回我们出队列的元素里面的数据域
    return tmp;

}

//取栈顶元素操作（不出栈)
Datatype getLinkQueueTop(P_LinkQueue Ctrl)
{
    //调用我们自己编写的判断队列是否为空的函数
    if(isQueueEmpty(Ctrl) )
    {
        printf("此时的队列为空！！！\n");
        return -1;
    }
    //返回我们的管理栈的结构体所指向的节点里面的数据域
    return Ctrl->front->Data;
}

//遍历队列
void DIsPlayQueue(P_LinkQueue Ctrl)
{
    P_QueueNode tmp=Ctrl->front;
    if(isQueueEmpty(Ctrl))
    {
        printf("此时的队列为空！！！\n");
    }
    else
    {
        for(int i=0;i<Ctrl->capacity;i++)
        {
            printf("队列中的元素为%d   ",tmp->Data);
            tmp=tmp->next;
        }
        printf("\n");

    }
}

//销毁栈
int DestoryLinkStack(P_LinkQueue Ctrl)
{
    //调用我们自己编写的判断队列是否为空的函数
    if(isQueueEmpty(Ctrl))
    {
        printf("此时的队列为空！！！\n");
        return -1;
    }
    
    P_QueueNode tmp=Ctrl->front;
    while (Ctrl->capacity--)
    {
        Ctrl->front=tmp;
        tmp=tmp->next;
        free(Ctrl->front);
    }
}






int main(int argc, char const *argv[])
{
    //初始化队列
    P_LinkQueue Ctrl=LinkQueueInit();


    //调用我们自己编写的判断是否为空的函数
    if(isQueueEmpty(Ctrl))
    {
        printf("此时的队列为空！！！\n");
    }
    QueueNode *arr[5];
    
    for (Datatype i = 0; i < 5; i++)
    {
        arr[i]=NewQueueNode(i);
        InLinkQueue(Ctrl,arr[i]);

    }
    DIsPlayQueue(Ctrl);

    for (Datatype i = 0; i < 5; i++)
    {
        OutLinkQueue(Ctrl);
    }

    DIsPlayQueue(Ctrl);

    
    return 0;
}
