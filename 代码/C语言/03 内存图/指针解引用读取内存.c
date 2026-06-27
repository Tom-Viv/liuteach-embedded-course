#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=1345;
    char *p1=&a;
    int  *p2=&a;

    printf("int a   = %d\n",a);
    printf("char *P = %c\n",*p1);
    printf("int  *P = %d\n",*p2);
    
    return 0;
}
