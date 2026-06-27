#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=10;
    int b=20;
    int c=a++;//++在a的后面，先赋值再++，这句话拆分为

    // a++等价于a=a+1，还等价于a+=1;
    printf("c的值为%d\n",c++); //
    printf("c的值为%d\n",++c); //
    printf("c的值为%d\n",c);   //

    return 0;
}
