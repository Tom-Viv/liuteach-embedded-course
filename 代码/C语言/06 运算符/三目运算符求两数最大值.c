#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int m = (a > b) ? a : b;
    printf("m = %d\n", m);
    return 0;
}