#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a='$';
    printf("$ 对应的整数为%d\n",a);

    a=a+1;
    printf("$+1对应的字符为%c\n",a);

    char b=36;
    printf("36对应的字符为%c\n",b);

    b=b+1;
    printf("b加一之后得到的字符为%c\n",b);
    
    return 0;
}
