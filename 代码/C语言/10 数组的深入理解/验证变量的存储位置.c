#include <stdio.h>

//不定义数组，但是通过访问数组的方式去访问元素
int main(int argc, char const *argv[])
{
    int a = 123;
    int b = 234;
    int c = 345;
    int d = 456;
    int e = 678;
    int f = 789;
    int *p=&a;

    printf("没有定义数组但是通过访问数组的形式去遍历的数据为：\n");
    for (size_t i = 0; i < 6; i++)
    {
        printf(" %d ",p[i]);
    }
    printf("\n");
    return 0;
}
