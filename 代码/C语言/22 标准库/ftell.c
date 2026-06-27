#include <stdio.h>
#include <stdint.h>


int main(void)
{
    FILE *fp = fopen("read.txt", "a+");

    fseek(fp,0,SEEK_END);
    int a=ftell(fp);
    printf("这个文件有%d个字节\n",a);


    fclose(fp);
    return 0;
}