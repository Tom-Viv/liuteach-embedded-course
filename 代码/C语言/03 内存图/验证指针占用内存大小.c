#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=97;
    char *p=&a;
    printf("用char类型的指针指向int类型的数据进行解释的数据为%c\n",*p);


    return 0;
}
