#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b= 0;
    int c,d=10;
    c=++a;
    d=b++;
    printf("c的值为%d\n",c);
    printf("d的值为%d\n",d);
    return 0;
}
