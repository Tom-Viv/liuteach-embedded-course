#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef int Datatype;

 //-------设计数据域------
typedef struct __my_data
{
    //void类型是指这个数据所占用的内存空间
    void * Datatype;
    //这个数据类型的大小
    size_t Size;

}Database,*P_Database;

//-------设计指针域-------
typedef struct __my_pointer
{
    //-------设计指针域-------
    struct __my_pointer *prev;
    struct __my_pointer *next;

}Pointer,*P_Pointer;

//节点设计
typedef struct  __my_container
{   
    Database Data;
    Pointer ptr;    
}Container,*P_Container;

#define offsetof(type, member) ((size_t)&((type *)0)->member)


#define container_of(ptr, type, member) ({ \
    const typeof( ((type *)0x00000000)->member ) *__mptr = (ptr); \
    (type *)( (char *)__mptr - offsetof(type, member) ); \
})





//初始化容器
P_Container Container_Init()
{
    //给容器申请内存空间
    P_Container head=(P_Container)malloc(sizeof(Container));
    if (head==NULL)
    {
        printf("申请容器的内存失败！！！\n");
    }

    //给容器里面的数据域申请内存空间
    head->Data.Datatype=malloc(sizeof(Datatype));
    if(head->Data.Datatype==NULL)
    {
        printf("申请容器的数据域内存失败！！！\n");
    }

    //给容器里面的指针域申请内存空间
    head->ptr=(P_Pointer)malloc(sizeof(Pointer));
    if (head->ptr==NULL)
    {
        printf("申请容器的指针域内存失败！！！\n");
    }
    //初始化头节点前后指针，因为是双向循环链表，所以前后指针都指向head
    head->ptr->prev=head->ptr;
    head->ptr->next=head->ptr;

    //把头结点的内存空间存储为0；
    head->Data.Datatype=NULL;
    //存储的数据类型有几个字节
    head->Data.Size=sizeof(Datatype);
    return head;
}

//创建新的节点
P_Container NewNode(void *NewData,size_t Size)
{
    //给新节点的容器申请内存空间
    P_Container New=(P_Container)malloc(sizeof(Container));
    if (New==NULL)
    {
        printf("申请新节点的容器的内存失败！！！\n");
    }

    //给新节点里面的数据域申请内存空间
    New->Data.Datatype=malloc(sizeof(Datatype));
    if(New->Data.Datatype==NULL)
    {
        printf("申请新节点的容器的数据域内存失败！！！\n");
    }
    
    //给新节点的容器里面的指针域申请内存空间
    New->ptr=(P_Pointer)malloc(sizeof(Pointer));
    if (New->ptr==NULL)
    {
        printf("申请容器的指针域内存失败！！！\n");
    }

    //初始化新节点，因为是双向循环链表，所以前后指针都指向New（自己）
    New->ptr->prev=New->ptr;
    New->ptr->next=New->ptr;

    //给我们的数据域赋值
    memcpy(New->Data.Datatype,NewData,sizeof(Datatype));
    //存储的数据类型有几个字节
    New->Data.Size=Size;

    return New;
}

//头插法
void AddList(P_Container head,P_Container NewNode)
{
    NewNode->ptr->next=head->ptr->next;
    NewNode->ptr->prev=head->ptr;
    head->ptr->next->prev=NewNode->ptr;
    head->ptr->next=NewNode->ptr;

    return;
}

//正向遍历
void DIsPlay(P_Container head)
{
    P_Container tmp = head;

  
    while (tmp->ptr->next != head->ptr)
    {

        

        printf("%p\n",tmp2);
        
        tmp2=(container_of(tmp->ptr,Container,ptr);

        printf("链表当中的数据是%d\n", *(int *))(container_of(tmp->ptr,Container,ptr)->Data.Datatype));

        tmp->ptr->next=tmp->ptr->next->next;
    }
    return;
}

int main(int argc, char const *argv[])
{

    P_Container MyContainer = Container_Init(sizeof(Datatype));

    P_Container arr[5];


    for (int i=0; i < 4; i++)
    {
        arr[i]=NewNode(&i,i);
        AddList(MyContainer,arr[i]);
        printf("%d\n",*((int *)(arr[i]->Data.Datatype)));
    }
    
    DIsPlay(MyContainer);



    return 0;
}

