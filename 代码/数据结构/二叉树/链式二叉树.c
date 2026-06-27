#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Datatype;

//设计节点
typedef struct __tree
{
    Datatype Data;
    struct __tree *L;
    struct __tree *R;
}Tree,*P_Tree;


//初始化二叉树,相当于新建节点
P_Tree TreeInit(Datatype Data)
{
    P_Tree New =(P_Tree)malloc(sizeof(Tree));
    if (New == NULL)
    {
        printf("申请二叉树的根节点失败！！！\n");
        return -1;
    }
    memcpy(&New->Data,&Data,sizeof(Data));

    New->L=NULL;
    New->R=NULL;

    return New;
}

//插入二叉树
P_Tree InTree(P_Tree root,P_Tree New)
{
    if(root == NULL)
    {
        return New;
    }
    if (root->Data>New->Data)
    {
        root->L=InTree(root->L,New);
    }
    else if (root->Data<New->Data)
    {
        root->R=InTree(root->R,New);
    }

    return root;
}

//前序遍历：根节点->左节点->右节点
void PreOrderTraverse(P_Tree root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d\n",root->Data);
    PreOrderTraverse(root->L);
    PreOrderTraverse(root->R);
}

//中序遍历：左节点->根节点->右节点
void InOrderTraverse(P_Tree root)
{
    if (root == NULL)
    {
        return;
    }
    PreOrderTraverse(root->L);
    printf("%d\n",root->Data);
    PreOrderTraverse(root->R);
}

//后序遍历：左节点->根节点->右节点
void InOrderTraverse(P_Tree root)
{
    if (root == NULL)
    {
        return;
    }
    PreOrderTraverse(root->L);
    PreOrderTraverse(root->R);
    printf("%d\n",root->Data);
}



