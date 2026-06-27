#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,4,5};
    int (*p1)[5]=&arr;

    printf("通过p1打印的值为%d\n",(*p1)[1]);
    printf("通过p1打印的值为%d\n",*(*p1+1));
    printf("通过p1打印的值为%d\n",*(*(p1+1)-4));
    printf("通过p1打印的值为%d\n",**(p1));
    // printf("通过p1打印的值为%d\n",*p1);
    // printf("通过p1打印的值为%d\n",*p1);
    return 0;
}
