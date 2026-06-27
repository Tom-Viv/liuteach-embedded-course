#include <stdio.h>

enum STATUS{
    FREE=1,
    DEBUG,
    RUN,
};

int main(int argc, char const *argv[])
{
    enum STATUS _STATUS_=2;
    switch (_STATUS_)
    {
    case FREE:
        printf("程序属于空闲状态\n");
        break;
    case DEBUG:
        printf("程序处于调试状态\n");
        break;
    case RUN:
        printf("程序处于运行状态\n");
        break;
    default:
        break;
    }
    return 0;
}
