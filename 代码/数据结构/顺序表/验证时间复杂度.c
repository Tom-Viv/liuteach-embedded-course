#include <stdio.h>

void counting(int n)
{   
    
    for(int i=1; i<=n; i++)          // 执行n+1次
    {
        printf("外层本行语句将会出现%d次\n",i);  // 执行n次

        for(int j=1; j<=n; j++)      // 执行n*(n+1)次
        {
            printf("最内层本行语句将会出现%d次\n",(j*i));  // 执行n*n次
        }
    }
    
    
}

int main(int argc, char const *argv[])
{
    counting(5);
    return 0;
}
