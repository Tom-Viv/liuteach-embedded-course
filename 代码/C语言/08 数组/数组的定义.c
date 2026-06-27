#include <stdio.h>

int main(int argc, char const *argv[])
{

    int arr[5]={0,1,2,3,4};
    for (size_t i = 0; i < 5; i++)
    {
        printf("数组的第%ld个元素的地址是%p\n",i,&arr[i]);
    }
    

    return 0;
}
