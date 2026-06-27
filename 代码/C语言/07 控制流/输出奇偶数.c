#include <stdio.h>
int main()
{
    printf("奇数:\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        printf("%d ", i);
        sleep(1);
    }
    printf("\n");
    printf("偶数:\n");    
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        printf("%d ", i);
        sleep(1);
    }
    printf("\n");
    return 0;
}