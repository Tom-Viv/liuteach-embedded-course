#include <stdio.h>

int a=200;

int test(void)
{
    printf("Hello,world! 2\n");
    
    return a;
}


int main(int argc, char const *argv[])
{
    int b=test();

    printf("b接受到test函数的返回值是%d\n",b);

    printf("Hello,world! 2\n");

    return 0;

    printf("Hello,world! 3\n");

    printf("Hello,world! 4\n");

}
