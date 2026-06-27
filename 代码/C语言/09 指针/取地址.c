#include <stdio.h>
int main()
{
    int a = 100;
    printf("整型变量 a 的地址是: %p\n", &a);
    
    char c = 'x';
    printf("字符变量 c 的地址是: %p\n", &c);

    double f = 3.14;
    printf("浮点变量 f 的地址是: %p\n", &f);

    return 0;
}