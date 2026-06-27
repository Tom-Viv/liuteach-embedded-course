#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=1;
    while(i)
    {
        i++;
        printf(" %d ",i);
        usleep(1000*50);
    }
    
    return 0;
}
