#include "commen.h"

int sum(int *a,int *b)
{
    int tmp=*a+*b;
    return tmp;
}

int main(int argc, char const *argv[])
{
    int a=10;
    int b=20;
    int c=0;
    c=sum(&a,&b);
    printf("通过调用其他文件定义的函数去求和的数据为%d\n",c);

    c=mul(&a,&b);
    printf("通过调用其他文件定义的函数去求和的数据为%d\n",c);
    return 0;
}
