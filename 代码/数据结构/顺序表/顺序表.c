#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//管理顺序表的结构体
typedef struct __list
{
    int capacity; //顺序表的容量
    int Last;     //顺序表最末元素的下标
    int *ptr;     //指向顺序表存储空间的指针
}List,*P_List;


//顺序表初始化函数，参数是要申请多大
P_List List_Init(int Capacity)
{
    P_List ptr_list=(P_List)malloc(sizeof(List));
    if(ptr_list==NULL)
    {
        printf("申请管理结构体的内存失败");
        return NULL;
    }
    ptr_list->ptr=calloc(Capacity,sizeof(int));
    if(ptr_list->ptr==NULL)
    {
        printf("申请顺序的内存失败");
        free(ptr_list);
        return NULL;
    }
    // 初始化管理结构体成员
    ptr_list->capacity=Capacity;
    // 空表，最末元素下标为-1,0的话就代表着已经有一个元素了
    ptr_list->Last=-1; 

    return ptr_list;

}

//尾插法添加数据
int TailAddList(int Data,P_List ptr_list)
{
    /*先检查顺序表有没有储存满，类似数组容量等于下标+1*/
    if(ptr_list->capacity==(ptr_list->Last+1))
    {
        printf("顺序表已经存满了！\n");
        return -1;
    }
    //给顺序表的下标进行自增
    (ptr_list->Last)++;
    //通过指针移动到可以用来存放数据的一个空位置
    memcpy((ptr_list->ptr)+(ptr_list->Last),&Data,sizeof(Data));

    return 0;

}

//从大到小的有序插入
int DescOrderAddList(int Data,P_List ptr_list)
{
    /*先检查顺序表有没有储存满，类似数组容量等于下标+1*/
    if(ptr_list->capacity==(ptr_list->Last+1))
    {
        printf("顺序表已经存满了！\n");
        return -1;
    }
    int i=0;
    //找到第一个比新数据大的元素的位置
    while(Data<ptr_list->ptr[i]&&i<=ptr_list->Last)
    {
        i++;
    }
    int j=ptr_list->Last;
    //将pos位置及后面的所有元素向后移动一位（从后往前挪，避免数据覆盖）
    for(;j>=i;j--)
    {
        //ptr[i]和*(ptr+i)等价
        memcpy(ptr_list->ptr+j+1,ptr_list->ptr+j,sizeof(Data));
    }
    //将新数据插入到i位置
    memcpy(ptr_list->ptr+i,&Data,sizeof(Data));
    //更新最末元素下标
    (ptr_list->Last)++;
    return 0;
}

//从小到大的有序插入
int AscOrderAddList(int Data,P_List ptr_list)
{
    /*先检查顺序表有没有储存满，类似数组容量等于下标+1*/
    if(ptr_list->capacity==(ptr_list->Last+1))
    {
        printf("顺序表已经存满了！\n");
        return -1;
    }
    int i=0;
    while(Data>=ptr_list->ptr[i]&&i<=ptr_list->Last)
    {
        i++;

    }
    int j=ptr_list->Last;
    for(;j>=i;j--)
    {
        //ptr[i]和*(ptr+i)等价
        memcpy(ptr_list->ptr+j+1,ptr_list->ptr+j,sizeof(Data));
    }
    memcpy(ptr_list->ptr+i,&Data,sizeof(Data));
    (ptr_list->Last)++;
    return 0;
}

//删除数据,按位置删除
int Del_List(int pos,P_List ptr_list)
{
    if (ptr_list->Last==-1)
    {
        printf("当前顺序表是空表，无法删除！\n");
        return -1;
    }
    int i=0;
    for(i=pos;i<ptr_list->Last;i++)
    {
        //ptr[i]和*(ptr+i)等价
        memcpy(ptr_list->ptr+i,ptr_list->ptr+i+1,sizeof(pos));
    }

    ptr_list->Last--;

}

//查找数据
int Find_List(int Data,P_List ptr_list)
{
    if (ptr_list->Last==-1)
    {
        printf("当前顺序表是空表，无法查找！\n");
        return -1;
    }

    for(int i=0;i<=ptr_list->Last;i++)
    {
        //if (Data==ptr_list->ptr[i])
        if (Data==*(ptr_list->ptr+i))
        {
            printf("查找到数据！\n");
            return i;
        }
    }
    printf("未查找到数据！\n");
}

// 修改制定位置的数据
int ModifyListByPos(int pos,int NewData,P_List ptr_list)
{
    if(pos<0||pos>ptr_list->Last)
    {
        printf("要修改的数据位置非法！\n");
        return -1;
    }
    memcpy(ptr_list->ptr+pos,&NewData,sizeof(NewData));

    return 0;
}

//遍历顺序表
void Display_List(P_List ptr_list)
{
    //如果顺序表的元素下标是-1，证明没有元素
    if((ptr_list->Last)==-1)
    {
        printf("当前顺序表为空表，无法遍历！\n");
        return ;
    }
    //控制循环的i，要小于等于顺序表的下标，这样才会打印出最后的值
    for(int i=0;i<=ptr_list->Last;i++)
    {
        printf("Data[%d]:%d\n",i,ptr_list->ptr[i]);
    }
    return;
}

//释放我们申请的堆内存
void Free_Lsit(P_List ptr_list)
{
    if(ptr_list!=NULL)
    {
        if(ptr_list->ptr!=NULL)
        {
            free(ptr_list->ptr);
        }
        free(ptr_list);
    }
}

int main(int argc, char const *argv[])
{
    //初始化顺序表
    P_List ptr=List_Init(5);

    //添加数据
    for (size_t i = 1; i <= 5; i++)
    {
        TailAddList(i,ptr);
    }
    //遍历顺序表
    Display_List(ptr);

    //删除数据
    Del_List(3,ptr);
    printf("-------------------------\n");

    AscOrderAddList(3,ptr);

    //遍历顺序表
    Display_List(ptr);

    //释放内存
    Free_Lsit(ptr);

    return 0;
}
