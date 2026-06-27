#ifndef __MYKERNEILLIST_H
#define __MYKERNEILLIST_H

//系统自带头文件
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//设计数据域
typedef struct __data
{
    char a;
    short b;
    int c;
}Data_str,*P_Data_str;


//设计容器
typedef struct __list
{
    // 指针域
    struct __list *Next; // 后继指针，指向下一个节点
    struct __list *Prev; // 前驱指针，指向前一个节点
    
}Lsit, *P_List;


// 节点设计
typedef struct __node
{
    //数据域
    Data_str Data;
    //指针域
    P_List p;

} Node, *P_Node;

#endif