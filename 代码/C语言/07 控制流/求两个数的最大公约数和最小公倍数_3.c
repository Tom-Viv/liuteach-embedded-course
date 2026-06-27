#include <stdio.h>
/*
    ‌百位数字 = N // 100‌
    ‌十位数字 = (N // 10) % 10‌
    ‌个位数字 = N % 10‌‌‌
*/
#define EXERCISES 2

#if EXERCISES == 1


// 最大公约数和最小公倍数
void Test1()
{
    int a = 48;
    int b = 20;
    int maxd = 0;
    int mind = 0;
    for (int i = 1; i <= ((a < b) ? a : b); i++)
    {
        if (a % i == 0 && b % i == 0)
            maxd = i;
    }
    mind = a * b / maxd;
    printf("%d和%d最大公约数为%d\n", a, b, maxd);
    printf("%d和%d最小公倍数为%d\n", a, b, mind);
}

#elif EXERCISES == 2

// 打印乘法表
void Test2()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d ", i, j, i * j);
        }
        printf("\n");
    }
}

#elif EXERCISES == 3

// 阶乘函数
int fact(int _num)
{
    int a = 1;
    for (int i = 1; i <= _num; i++)
    {
        a = a * i;
    }
    return a;
}

#elif EXERCISES == 4

// abc=a!+b!+c!
void Test3()
{
    int a, b, c;
    printf("满足该要求的三位数有：\n");
    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = (i - (a * 100)) / 10;
        c = (i - (a * 100) - (b * 10));
        int fa = fact(a);
        int fb = fact(b);
        int fc = fact(c);
        if (i == fa + fb + fc)
        {
            printf("%d\n", i);
        }
    }
}

#elif EXERCISES == 5

// 水仙花数
void Test4()
{
    int a, b, c;
    printf("满足该要求的三位数有：\n");
    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = (i - (a * 100)) / 10;
        c = (i - (a * 100) - (b * 10));
        int fa = a * a * a;
        int fb = b * b * b;
        int fc = c * c * c;
        if (i == fa + fb + fc)
        {
            printf("%d\n", i);
        }
    }
}

#elif EXERCISES == 6
// 被7整除，位数有3
void Test5()
{
    int a, b, c;
    int sum=0;
    for (int i = 100; i <= 999; i++)
    {
        if (i % 7 == 0)
        {
            a = i / 100;
            b = (i - (a * 100)) / 10;
            c = (i - (a * 100) - (b * 10));
            if (a == 3 || b == 3 || c == 3)
            {
                sum += i;
            }
        }
    }

    printf("满足该要求的三位数的合为%d\n", sum);
}

#elif EXERCISES == 7

// 百鸡百元问题
void Test6()
{
    // 母鸡是3元一只，小鸡是1元三只
    int a = 0;
    int b = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (j + i == 100 && ((3 * j) + (i / 3)) == 100)
            {
                a = i;
                b = j;
            }
        }
    }
    printf("小鸡要%d只,母鸡要%d只\n", a, b);
}

#elif EXERCISES == 8
// if_else实现
void Test7()
{
    int a;
    while (1)
    {
        printf("请输入整数（1-7）：");
        scanf("%d", &a);
        if (a < 1 || a > 7)
        {
            printf("输入错误！\n");
            return;
        }
        if (a == 1)
            printf("星期一\n");
        else if (a == 2)
            printf("星期二\n");
        else if (a == 3)
            printf("星期三\n");
        else if (a == 4)
            printf("星期四\n");
        else if (a == 5)
            printf("星期五\n");
        else if (a == 6)
            printf("星期六\n");
        else if (a == 7)
            printf("星期七\n");
    }
}

#elif EXERCISES == 9

// switch实现
void Test8()
{
    int a;
    while (1)
    {
        printf("请输入整数（1-7）：");
        scanf("%d", &a);
        if (a < 1 || a > 7)
        {
            printf("输入错误！\n");
            return;
        }
        switch (a)
        {
        case 1:
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期天\n");
            break;

        default:
            break;
        }
    }
}
#endif

int main(int argc, char const *argv[])
{

    return 0;
}
