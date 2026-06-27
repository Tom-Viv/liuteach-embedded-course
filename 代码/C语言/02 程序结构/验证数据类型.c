#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=0;
    float b=3.14;
    char c='A';
    printf("a的值为%d,a的地址是%p\n",a,&a);
    printf("b的值为%f,b的地址是%p\n",b,&b);
    printf("c的值为%c,c的地址是%p\n",c,&c);

    return 0;
}
