#include <stdio.h>

void sum(int a)
{
    a+=100;
    printf("第二次输出a的值为%d\n",a);

    printf("第三次输出a的值为%d\n",a++);

    printf("第三次输出a的值为%d\n",++a);

}

int main(int argc, char const *argv[])
{
    int a=100;
    sum(a);
    printf("第四次输出a的值为%d\n",a);
    return 0;
}
