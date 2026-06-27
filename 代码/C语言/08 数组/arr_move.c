#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int i=;

    printf("正常访问指针%d\n", arr[2]);
    printf("正常访问指针%d\n", *(arr + 2));
    printf("正常访问指针%d\n", *( 2+arr) );
    printf("正常访问指针%d\n", 2[arr] );

}
