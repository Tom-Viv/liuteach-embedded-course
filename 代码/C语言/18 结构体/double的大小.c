#include <stdio.h>

int main()
{
    int a=100;
    int *p=&a;
    printf("deuble在32位系统中占用%zu\n",sizeof(p));
}