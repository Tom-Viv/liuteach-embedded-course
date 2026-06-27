#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[]={3,2,3,4,5,6,7,8};
    int *p=&arr[2];

    printf("正常访问指针%d\n",*p);
    printf("正常访问指针%d\n",*(p-2));

}