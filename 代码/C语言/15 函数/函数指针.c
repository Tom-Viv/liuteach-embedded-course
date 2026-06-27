#include <stdio.h>

void swap(int *a,int *b)
{
    int c = 0;
    c=*a;  
    *a=*b;
    *b=c;
}

int main(int argc, char const *argv[])
{
    void (*p)(int *,int *);
    p=swap;
    int num1=123;
    int num2=456;
    printf("交换之前num1的值为%d\n",num1);
    p(&num1,&num2);
    printf("交换之后num1的值为%d\n",num1);
    return 0;
}
