#include <stdio.h>

#define ARR_LEN 10

int main(int argc, char const *argv[])
{
    int arr1[10]={0};
    //使用宏的变长数组，宏属于文本替换，可以进行初始化
    int arr2[ARR_LEN]={0};
    printf("arr2变长数组的大小为%zu \n",sizeof(arr2));
    //使用变量的变长数组，不可以直接初始化，因为编译器他不确定数组的大小
    int a = 10;
    int arr3[a];
    printf("arr3变长数组的大小为%zu \n",sizeof(arr3));
    //修改a的值，arr3的数组大小并不会改变
    a=5;
    printf("将a值从10 改成5 的时候，arr3变长数组的大小为%zu \n",sizeof(arr3));
    return 0;
}
