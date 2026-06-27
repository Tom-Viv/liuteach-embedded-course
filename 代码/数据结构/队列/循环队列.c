#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//给int取别名，int和Datatype都可以用来定义变量
typedef int Datatype;

//管理顺序表的结构体
typedef struct __list
{
    Datatype *ptr;              //声明一个指向Datatype数据类型的指针
    unsigned int capacity;      //队列的总容量
    unsigned int front;         //队列的队头下标：指向队头元素
    unsigned int rear;          // 队尾下标：指向队尾元素的下一个位置

}NormalQueue, *P_NormalQueue;


//顺序表初始化函数，参数是要申请多大
P_NormalQueue Queue_Init(unsigned int Capacity)
{
    P_NormalQueue ptr_queue=(P_NormalQueue)malloc(sizeof(NormalQueue));
    if(ptr_queue==NULL)
    {
        printf("申请管理队列的结构体失败\n");
        return NULL;
    }

    // -------------初始化管理结构体成员(队列)----------------------
    //相当于初始化我们的队列用来指向我们存储数据的一个入口地址
    ptr_queue->ptr=calloc(Capacity,sizeof(Datatype));
    if(ptr_queue->ptr==NULL)
    {
        printf("申请队列用来储存数据的内存失败\n");
        free(ptr_queue);
        return NULL;
    }
    //初始化队列的容量，赋值的是函数的参数
    ptr_queue->capacity=Capacity;
    // 空队列，所以头和尾的下标都是0；
    ptr_queue->front=0; 
    ptr_queue->rear=0;

    return ptr_queue;

}

/// @brief 判断队列是否为空
/// @param P_NormalQueue Ctrl 
/// @return true，代表队列为空；flase，代表队列为满
bool NormalQueueIsEmpty(P_NormalQueue Ctrl)
{
    //当队列的队头和队尾下标相等时，队列为空
    //如果相等的时候返回true，代表队列为空
    //不相等的时候返回flase，代表队列为满
    return Ctrl->front==Ctrl->rear;
}

//判断队列是否为满
bool NormalQueueIsEmpty(P_NormalQueue Ctrl)
{
    //当队列的队尾下标等于容量-1时，队列为满
    //如果相等的时候返回true，代表队列为满
    //不相等的时候返回flase，代表队列为不满
    return (Ctrl->rear+1)%Ctrl->capacity==Ctrl->front;
}

//在队尾添加数据（入队）
int AddQueue(P_NormalQueue Ctrl,Datatype new)
{
    /*先检查顺序表有没有储存满，类似数组容量等于下标+1*/
    if(NormalQueueIsEmpty(Ctrl))
    {
        printf("队列已经存满了！\n");
        return -1;
    }
    //通过指针移动到可以用来存放数据的一个空位置
    memcpy((Ctrl->ptr+Ctrl->rear),&new,sizeof(Datatype));
    Ctrl->rear=(Ctrl->rear+1)%Ctrl->capacity;
    return 0;
}

//在队头出数据（出队）
Datatype outQueue(P_NormalQueue Ctrl)
{
    if (NormalQueueIsEmpty(Ctrl))
    {
        printf("队列是空的！\n");
        return -1;
    }
    //定义一个临时变量用来储存我们的栈顶数据
    Datatype tmp;
    //把队头数据拷贝到我们的临时变量
    //Ctrl->ptr + Ctrl->front等价于ptr[front];
    memcpy(&tmp,Ctrl->ptr + Ctrl->front, sizeof(int));   
    //队头++，移动到下一个要出队的元素
    Ctrl->front=(Ctrl->front++)%Ctrl->capacity;

    return tmp;
}

//获取对头元素的数据，但不出队列
Datatype WriteQueue(P_NormalQueue Ctrl)
{
    if (NormalQueueIsEmpty(Ctrl))
    {
        printf("队列是空的！\n");
        return -1;
    }
    return Ctrl->ptr + Ctrl->front;
    return Ctrl->ptr[Ctrl->front];
}

// 清空普通队列中的所有元素
void NormalQueueClear(P_NormalQueue Cntl)
{
    Cntl->front = 0;
    Cntl->rear = 0;
}

// 返回普通队列中当前有效元素的个数
unsigned int NormalQueueGetSize(P_NormalQueue Cntl)
{
    //（队尾-队头+1+容量）%容量
    return ((Cntl->rear - Cntl->front)+1+Cntl->capacity)%Cntl->capacity;
}

int main(int argc, char const *argv[])
{

}
