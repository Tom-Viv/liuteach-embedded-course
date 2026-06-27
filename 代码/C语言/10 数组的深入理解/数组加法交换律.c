#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int i=2;

    int *p=arr;
    
    printf("正常访问指针%p\n", &arr[2]);

}
    