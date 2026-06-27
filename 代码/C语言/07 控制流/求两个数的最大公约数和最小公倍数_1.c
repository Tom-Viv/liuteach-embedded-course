#include <stdio.h>

int main(void)
{
    int a=128;
    int b=256;
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    int i = 0;
    for (i = min; i >= 1; i--)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            break;
        }
    }
    if (i >= 1)
    {
        printf("%d和%d的最大公约数是%d\n", a, b, i);
    }
    else
    {
        printf("%d和%d的最大公约数不存在。\n", a, b);
    }
    int j = 0;
    for (j = max; j < (2 ^ 32 - 1); j++)
    {
        if ((j % a == 0) && (j % b == 0))
        {
            break;
        }
    }
    if (j < (2 ^ 32 - 1))
    {
        printf("%d和%d的最小公倍数是%d\n", a, b, j);
    }
    else
    {
        printf("%d和%d的最小公倍数不存在。\n", a, b);
    }
}