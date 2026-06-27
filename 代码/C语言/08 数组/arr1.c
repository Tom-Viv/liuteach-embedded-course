#include <stdio.h>
int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    // 以下四个语句都能正确访问arr[2]的值5
    printf("arr[2]:%d\n", arr[2]);
    printf("*(arr+2):%d\n", *(arr + 2));
    printf("*(2+arr):%d\n", *(2 + arr));
    printf("2[arr]:%d\n", 2[arr]);

    return 0;
    
}