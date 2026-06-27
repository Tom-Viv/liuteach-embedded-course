#include <stdio.h>

int a = 1, b = 2;
int c = 3, d = 4;

void swap_2(int c, int d)
{
    int temp = c;
    c = d;
    d = temp;
}

int main(void)
{
    printf("a=%d,b=%d\n", c, d);
    swap_2(c, d);
    printf("c=%d,d=%d\n", c, d);
    return 0;
}