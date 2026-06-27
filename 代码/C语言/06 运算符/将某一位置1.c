#include <stdio.h>

int main()
{
    int a = 2123;       // 二进制为0000 1000 0100 1011
    a = a | (1 << 11);  // 置1
    a = a & ~(1 << 13); // 置0
    printf("a = %d\n", a);
    return 0;
}
