#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


//管理栈的结构体
typedef struct __seqstack
{
    int Capacity; //栈的大小
    int Top;     //栈的最末元素的下标
    int *ptr;     //指向栈的存储空间的指针
}SeqStack,*P_SeqStack;


//栈初始化函数，参数是要申请多大
P_SeqStack SeqStack_Init(int Capacity)
{
    P_SeqStack ptr_SeqStack=(P_SeqStack)malloc(sizeof(SeqStack));
    if(ptr_SeqStack==NULL)
    {
        printf("申请栈的管理结构体内存失败！！！\n");
        return NULL;
    }
    ptr_SeqStack->ptr=calloc(Capacity,sizeof(int));
    if(ptr_SeqStack->ptr==NULL)
    {
        printf("申请栈的储存空间失败！！！\n");
        free(ptr_SeqStack);
        return NULL;
    }
    // 初始化管理结构体成员
    ptr_SeqStack->Capacity=Capacity;
    // 空栈，最末元素下标为-1,0的话就代表着已经有一个元素了
    ptr_SeqStack->Top=-1; 
    return ptr_SeqStack;

}
//判断栈是否为空，通过栈的最末元素的下标去判断，-1表示空栈
int isStackEmpty_1(P_SeqStack Cntl)
{
    if (Cntl->Top == -1)
    {
        printf("此时栈为空！！！\n");
        return 0;

    }
    else
    {
        return -1;
    } 
}

//判断栈是否为空，通过栈的最末元素的下标去判断，-1表示空栈
bool isStackEmpty_2(P_SeqStack Cntl)
{
    //如果为-1，则返回true，不是-1，返回false
    return Cntl->Top == -1;
}

//判断栈是否为空，通过栈的最末元素的下标去判断
//如果你的栈的最末元素的下标，等于你的容量，代表着栈已经满了
int isStackFull_1(P_SeqStack Cntl)
{
    if (Cntl->Top == Cntl->Capacity - 1 )
    {
        printf("此时栈已存储满！！！\n");
        return 0;
    }
    else
    {
        return -1;
    }
}

//判断栈是否为空，通过栈的最末元素的下标去判断
//如果你的栈的最末元素的下标，等于你的容量，代表着栈已经满了
bool isStackFull_2(P_SeqStack Cntl)
{
     //如果为满栈，则返回true，不是满栈，返回false
    return Cntl->Top == Cntl->Capacity - 1;
}

//入栈操作（push）
int push(P_SeqStack Cntl,int Data)
{
    if (Cntl->Top=Cntl->Capacity - 1)
    {
        printf("此时栈已存储满！！！\n");
        return -1;
    }
    //最末元素下标++,用来存储数据
    Cntl->Top++;
    // 把新数据拷贝到栈顶位置
    memcpy(Cntl->ptr + Cntl->Top, &Data, sizeof(int));    
}

//出栈操作
int pop(P_SeqStack Cntl)
{
    if ((isStackEmpty_1(Cntl)))
    {
        printf("此时栈为空！！！\n");
    }
    //定义一个临时变量用来储存我们的栈顶数据
    int tmp;
    //把栈顶数据拷贝到我们的临时变量
    memcpy(&tmp, Cntl->ptr + Cntl->Top, sizeof(int));   

    Cntl->Top--;

    return tmp;
}

//取栈顶元素，但是呢，不出栈
int getTop(P_SeqStack Cntl)
{
    if ((isStackEmpty_1(Cntl)))
    {
        printf("此时栈为空！！！\n");
    }

    return Cntl->ptr + Cntl->Top;

}



//销毁栈，释放我们申请的堆内存
void Free_Lsit(P_SeqStack Cntl)
{
    if(Cntl!=NULL)
    {
        if(Cntl->ptr!=NULL)
        {
            free(Cntl->ptr);
        }
        free(Cntl);
    }
    return ;
}

int main(int argc, char const *argv[])
{
    


    return 0;
}
