#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10]= {1,2,3,4,5,6,7,8,9};

    int *p=a;
    
    printf("p的值为%d\n",*p);

    printf("p+3的值为%d\n",*(p=(p+3)));

    printf("p的值为%d\n",*p);
    return 0;
}
