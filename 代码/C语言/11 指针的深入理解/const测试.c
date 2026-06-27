#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int a = 123;
    // const int b;

    // printf("a和b的值分别时%d和%d\n", a, b);

    // int *p_a = &a;
    // int *p_b = &b;
    // *p_a = 456;
    // *p_b = 456;

    // printf("a和b的值分别时%d和%d\n", a, b);

    // int c = 100;
    // int d = 200;

    // int const *p_c=&c;
    // int const *p_d=&d;

    // printf("a和b的值分别时%d和%d\n", *p_c, *p_d);
    // p_c=&a;
    // p_d=&b;
    // printf("a和b的值分别时%d和%d\n", *p_c, *p_d);

    // int **p_p_c=&p_c;
    // int **p_p_d=&p_d;

    // **p_p_c=456;
    // **p_p_d=789;
    // printf("a和b的值分别时%d和%d\n", a, b);

    char *p="abcd";

    p="ef";

    printf("*p的值为%s\n",p);

    return 0;
}
