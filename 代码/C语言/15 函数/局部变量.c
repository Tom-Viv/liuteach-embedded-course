#include <stdio.h>

void fun1(void)
{
    int a;
}

int main(int argc, char const *argv[])
{
    {
        int b = 100;
        {
            b = 234;
        }
    }
    return 0;
}
