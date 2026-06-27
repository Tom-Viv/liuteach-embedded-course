#include <stdio.h>

int a[1024];//内存池

int main(int argc, char const *argv[])
{
    int a = 0;
    switch (argc)
    {
    case 1:
        a=a+argc;
        printf("命令行参数的个数为%d,a的值为%d\n", argc, a);
        printf("命令行参数的个数为%s\n", argv[0]);
        break;
    case 2:
        a=a+argc;
        printf("命令行参数的个数为%d,a的值为%d\n", argc, a);
        printf("命令行参数的个数为%s\n", argv[1]);
        break;
    case 3:
        a=a+argc;
        printf("命令行参数的个数为%d,a的值为%d\n", argc, a);
        printf("命令行参数的个数为%s\n", argv[2]);
        break;
    case 4:
        a=a+argc;
        printf("命令行参数的个数为%d,a的值为%d\n", argc, a);
        printf("命令行参数的个数为%s\n", argv[3]);
        break;
    default:
        break;
    }
    return 0;
}
