#include <stdio.h>

int main(int argc, char const *argv[])
{
    int state = 1;

    switch (state)
    {
    case 1:
        printf("此时是用户模式\n");

    case 2:
        printf("此时是调试模式\n");

    case 3:
        printf("此时是管理员模式\n");

    default:
        printf("此时程序已不可控\n");
        break;
    }

    return 0;
}
