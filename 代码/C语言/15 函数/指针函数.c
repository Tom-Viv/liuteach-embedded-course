#include <stdio.h>
#include <stdlib.h>

int * create(void)
{
    int *p=(int *)malloc(4);
    *p=100;
    return p;

}

int main(int argc, char const *argv[])
{
    int *ptr=create();
    printf("通过指针函数返回的值为%d\n",*ptr);
    return 0;
}
