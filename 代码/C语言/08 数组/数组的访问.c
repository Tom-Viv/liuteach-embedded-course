#include <stdio.h>


int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,4,5,6};
    for (size_t i = 0; i < 5; i++)
    {
        printf("数组元素的值为%d\n",arr[i]);
    }
    printf("------------------------\n");
    arr[2]=100;
    printf("arr[2]的值为%d\n",arr[2]);
    printf("------------------------\n");
     for (size_t i = 0; i < 5; i++)
    {
        printf("数组元素的值为%d\n",arr[i]);
    }
    
    return 0;
}
