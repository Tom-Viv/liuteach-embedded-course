#include <stdio.h>
#include "func1.h"
#include "func2.h"


int main(int argc, char const *argv[])
{
    int a=20;
    int b=20;

    printf("调用静态库里面的sum函数后求值结果为%d\n",sum(a,b));
    printf("调用静态库里面的mul函数后求值结果为%d\n",multiply(a,b));
    
    return 0;
}
