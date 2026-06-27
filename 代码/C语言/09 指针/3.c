#include <stdio.h>
int main()
{
    int a ;
    // 修饰普通变量，使其成为只读常量
    const int b ;
    const int c ;
    const int b ;
    const int e ;


    printf("a:%d \t b:%d\n", a, b);

    a = 543; // 正确，普通变量可修改
    //b = 321; // 错误，编译报错：assignment of read-only variable ‘b’

    return 0;
}