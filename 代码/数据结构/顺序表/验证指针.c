#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9};

    int *p=arr;

    printf("arr[3]的值为%d\n",arr[3]);
    printf("arr[3]的值为%d\n",*(arr+3));

    printf("arr[3]的值为%d\n",*(p+3));
    printf("arr[3]的值为%d\n",p[3]);
    return 0;
}
