#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 指针p指向一块4字节的内存，数据类型未确定
    void *p = malloc(4);

    // 1. 将4字节内存作为int型使用
    *(int *)p = 100;
    printf("int型赋值：%d\n", *(int *)p);

    // 2. 将同一块4字节内存作为float型使用
    *(float *)p = 3.14f;
    printf("float型赋值：%f\n", *(float *)p);

    free(p);
    return 0;
}