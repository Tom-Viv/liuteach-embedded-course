#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//未初始化全局变量
int a;
//初始化全局变量
int b = 100;

int swap(int a,int b)
{
    return 0;
}

int main(int argc, char const *argv[])
{
    printf("命令行参数argv[0]是%s\n",argv[0]);
    printf("命令行参数argv[1]是%s\n",argv[1]);
    printf("命令行参数argv[0]的地址是%p\n",argv[0]);
    printf("命令行参数argv[1]的地址是%p\n",argv[1]);

    printf("函数的形参argc的值是%d\n",argc);
    printf("函数的形参argc的地址是%p\n",&argc);

    int num=123;
    printf("num 的地址是%p\n",&num);

    char *msg=malloc(10);
    printf("msg的地址是%p\n",msg);

    //未初始化静态变量
    static int c;
    //初始化静态变量
    static int d = 100;
    printf("未初始化静态变量 c 的地址是%p\n",&c);
    printf("初始化静态变量 d 的地址是%p\n",&d);

    char *str="hello";
    printf("字符串的地址是%p\n",str);

    int (*p_fun)(int ,int );
    p_fun=swap;
    printf("函数的是%p\n",p_fun);
    return 0;
}

