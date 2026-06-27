#include <stdio.h>


int main(int argc, char const *argv[])
{
    char a = 65;
    int b=26;
    while (b)
    {
        printf("当前的字母是%c\n",a);
        a++;
        b--;
    }

    b=26;
    a = 97;
    while (b)
    {
        printf("当前的字母是%c\n",a);
        a++;
        b--;
    }
    return 0;
}
