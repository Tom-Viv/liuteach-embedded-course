#include <stdio.h>

int main(int argc, char const *argv[])
{
    //是有符号的
    char a=127;
    printf("a的值为%d\n",a);
    a=a+1;
    printf("a+1的值为%d\n",a);

    //是无符号的
    unsigned char b=127;
    printf("b的值为%d\n",b);
    b=b+1;
    printf("b+1的值为%d\n",b);

    unsigned char c=255;
    printf("c的值为%d\n",c);
    c=c+1;
    printf("c+1的值为%d\n",c);

    int d=2147483647;
    printf("d的值为%d\n",d);
    d=d+1;
    printf("d+1的值为%d\n",d);
    int i=0;
    while (1)
    {
        i++;//等价于i=i+1；
        printf("这里是一个死循环,i的值在不断增加%d\n",i);
    }

    
    return 0;
}
