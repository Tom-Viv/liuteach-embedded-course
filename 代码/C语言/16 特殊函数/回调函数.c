#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sighandler(int signum)
{
    printf("收到信号%d , 程序已被中断\n",signum);
    _exit(0);
}

int main(int argc, char const *argv[])
{
    signal(SIGINT,sighandler);
    while (1)
    {
        sleep(1);
        printf("程序正在运行\n");
    }
    return 0;
}
