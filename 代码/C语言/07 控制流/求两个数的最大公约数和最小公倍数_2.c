// 原理： gcd(a,b)=gcd(b,a mod b),当b为0时，两数的最大公约数即为a
// 余数作为除数，除数作为被除数
#include <stdio.h>

int *common_divisor(int *a, int *b)
{
    int tmp=*a;
    while (tmp)
    {
        tmp = *a % *b;
        *a = *b;
        *b = tmp;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int a=128;
    int b=256;
    printf("%d和%d的最大公约数是%d\n",a,b,*(common_divisor(&a,&b)));
    return 0;
}
