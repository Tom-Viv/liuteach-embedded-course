#include <stdio.h>
int main()
{
    int a = 123;
    int b = 456;
    int c = 789;
    printf("a,b,c的地址是                  %p,%p,%p\n",&a, &b, &c);
    // 定义并初始化指针数组
    int *arr[5] = {&a, &b, &c,0,0};

    printf("a,b,c的地址是                  %d,%d,%d\n",*(arr[0]), *(arr[1]), *(arr[2]));

    printf("指针数组里面的指针的地址是          %p,%p,%p\n",&arr[0], &arr[1], &arr[2]);
    
    int *(*p)[5]=arr;
    
    printf("通过数组指针访问指针数组里面的元素：%d,%d,%d\n",*((*p)[0]),*((*p)[0]+1),*((*p)[0]+2));

    return 0;
}




