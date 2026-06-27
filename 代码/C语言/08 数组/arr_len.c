#include <stdio.h>


#define LEN 30*20
int main()
{
    // 普通数组：元素个数为常量
    int arr[60];
    // 变长数组：元素个数为变量
    int len = 5;
    int a[LEN];                                  // 数组a是变长数组，长度为5
    printf("数组a的大小:%zu字节\n", sizeof(a)); // 输出20字节（32位int）

    // 修改变量len的值，不会改变数组a的长度
    len = 30;
    int b[len]; 
    printf("修改len后，数组a的大小：%zu字节\n", sizeof(b)); // 仍输出20字节

    // 二维变长数组：任意维度都可使用变量定义
    int x = 2;
    int y = 3;
    int b[x][y];  // 二维变长数组
    int b1[2][y]; // 部分维度为变量，也是变长数组
    int b2[x][3]; // 部分维度为变量，也是变长数组

    return 0;
}