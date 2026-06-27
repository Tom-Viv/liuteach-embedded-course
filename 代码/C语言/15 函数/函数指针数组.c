#include <stdio.h>

void fun1(int a)
{
    printf("我是函数1,传进来的参数是%d\n",a);
}
void fun2(int a)
{
    printf("我是函数2,传进来的参数是%d\n",a);
}
void fun3(int a)
{
    printf("我是函数3,传进来的参数是%d\n",a);
}
void fun4(int a)
{
    printf("我是函数4,传进来的参数是%d\n",a);
}
void fun5(int a)
{
    printf("我是函数5,传进来的参数是%d\n",a);
}

int main(int argc, char const *argv[])
{
    void (*ptr[5])(int)={&fun1,&fun2,&fun3,&fun4,&fun5};
    for (int i = 0; i < 5; i++)
    {
        (*ptr[i])(i);
    }

    return 0;
}
