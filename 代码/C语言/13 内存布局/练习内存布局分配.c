#include <stdio.h>
#include <stdlib.h>

int g_a;
int g_b=1;

// int main(void){
//     static int s_a;
//     static int s_b=2;
//     int c=100;
//     int f=123;
//     char *s="hello world";
//     int *d=(int *)malloc(4);
//     int *e=(int *)malloc(4);
//     printf(".text,%p\n",main);
//     printf(".roda,%p\n",s);
//     printf(".data,%p\n",&g_b);
//     printf(".data,%p\n",&s_b);
//     printf(".bss,%p\n",&g_a);
//     printf(".bss,%p\n",&s_a);
//     printf("堆,%p,%p\n",d,e);
//     printf("栈，%p,%p\n",&f,&c);
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int c=100;
    int f=123;
    printf("栈，%p,%p\n",&f,&c);
    return 0;
}
