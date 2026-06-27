#include <stdio.h>

int main()
{
    int a = 0, b = 1;
    // 逻辑与短路
    if (a && (b++))
    {
    }
    printf("b = %d\n", b);

    int c = 1, d = 0;
    // 逻辑或短路
    if (c || (d++))
    {
    }
    printf("d = %d\n", d);
    return 0;
}