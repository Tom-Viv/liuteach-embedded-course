#include <stdio.h>
int main()
{
    int a = 10, b = 20;

    // 方法1：临时变量（最常用）
    int t = a;
    a = b;
    b = t;

    // 方法2：加减法（无中间变量，可能溢出）
    a = a + b;//30
    b = a - b;//10
    a = a - b;//20

    // 方法3：异或运算（无中间变量，无溢出）
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a=%d, b=%d\n", a, b);
    return 0;
}
