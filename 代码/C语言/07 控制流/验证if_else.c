#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 40;
    if (a == 10)
    {
        printf("此时a的值是10\n");
        printf("当前代码执行到了第9行");
    }
    else if (a == 20)
    {
        printf("此时a的值是20\n");
        printf("当前代码执行到了第14行");
    }
    else if (a == 30)
    {
        printf("此时a的值是30\n");
        printf("当前代码执行到了第19行");
    }
    else if (a == 40)
    {
        printf("此时a的值是40\n");
        printf("当前代码执行到了第24行");
    }
    else
    {
        printf("此时a的值不清楚\n");
        printf("当前代码执行到了第29行");
    }
    return 0;
}
