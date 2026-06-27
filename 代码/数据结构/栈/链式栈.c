#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//给int取别名，int和Datatype都可以用来定义变量
typedef int Datatype;

//设计节点
typedef struct __stack_node
{
    //数据域
    Datatype Data;
    //指针域
    struct __stack_node *next;
}StackNode,*P_StackNode;

//管理栈的结构体
typedef struct __linkstack
{
    //栈顶指针
    P_StackNode stack_top_ptr; 
    //栈内元素的数量（链表的长度->栈的大小）
    int count;
}LinkStack,*P_LinkStack;

//初始化链式栈
P_LinkStack LinkStackInit()
{
    P_LinkStack ptr_linkstack=(P_LinkStack)malloc(sizeof(LinkStack));
    if(ptr_linkstack==NULL)
    {
        printf("申请栈的管理结构体内存失败！！！\n");
        return NULL;
    }

    // 初始化管理结构体成员
    ptr_linkstack->stack_top_ptr=NULL;
    // count代表的栈内元素的数量
    ptr_linkstack->count=0;

    return ptr_linkstack;
}

//判断链式栈是否为空,通过栈内元素数量去判断，若为零，则表示栈内为空
int isStackEmpty_1(P_LinkStack Cntl)
{
    if (Cntl->count == 0)
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
bool isStackEmpty_2(P_LinkStack Cntl)
{
    //如果栈顶指针指向空，则返回true，不是，返回false
    return Cntl->stack_top_ptr == NULL;
}

//创建节点
P_StackNode NewNode(Datatype Data)
{
    //创建新节点,calloc=malloc+memset
    P_StackNode NewNode=(P_StackNode)calloc(1, sizeof(Datatype));
    if(NewNode==NULL)
    {
        printf("创建新节点申请内存失败，请稍后再试！\n");
        return NULL;
    }
    memcpy(&NewNode->Data,&Data,sizeof(Datatype));
    NewNode->next=NULL;
    return NewNode;
}

//入栈操作
void LinkStack(P_LinkStack Cntl,P_StackNode NewData)
{
    
    NewData->next=Cntl->stack_top_ptr;
    Cntl->stack_top_ptr=NewNode;
    Cntl->count++;

    return;
}

//出栈操作
Datatype LinkStackPop(P_LinkStack Cntl)
{
    //调用我们自己编写的判断栈是否为空的函数
    if(isStackEmpty_1(Cntl) == 0)
    {
        printf("此时的栈为空！！！\n");
        return -1;
    }
    //定义一个临时的指向节点的指针，去指向栈顶元素
    P_StackNode del=Cntl->stack_top_ptr;
    //把栈顶元素里面的数据域拿出来
    Datatype tmp=del->Data;
    //栈顶指针向下移动,那最开始指向的元素就已经不是栈顶元素了
    Cntl->stack_top_ptr=del->next;
    //栈内元素少了一个，所以要--
    Cntl->count--;
    //把出栈的元素给释放掉，避免内存泄露
    free(del);
    //返回我们出栈的元素里面的数据域
    return tmp;

}

//取栈顶元素操作（不出栈)
Datatype getLinkStackTop(P_LinkStack Cntl)
{
    //调用我们自己编写的判断栈是否为空的函数
    if(isStackEmpty_1(Cntl) == 0)
    {
        printf("此时的栈为空！！！\n");
        return -1;
    }
    //返回我们的管理栈的结构体所指向的节点里面的数据域
    return Cntl->stack_top_ptr->Data;
}

//销毁栈
void DestoryLinkStack(P_LinkStack Cntl)
{
    //调用我们自己编写的判断栈是否为空的函数
    if(isStackEmpty_1(Cntl) == 0)
    {
        printf("此时的栈为空！！！\n");
        return -1;
    }
    P_StackNode tmp=Cntl->stack_top_ptr;
    while (Cntl->count--)
    {
        Cntl->stack_top_ptr=tmp;
        tmp=tmp->next;
        free(Cntl->stack_top_ptr);
    }
    

}






