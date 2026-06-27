#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char dest1[5];
    char src1[]="abcdefg";
    strcpy(dest1,src1);
    printf("拷贝后的字符串为%s\n",dest1);
    printf("拷贝后的字符串为%s\n",src1);
    printf("拷贝后的字符串为%s\n",src1+1);

    printf("----------------------------\n");

    char dest2[5];
    char src2[]="abcdefg";
    strncpy(dest2,src2,6);
    printf("拷贝后的字符串为%s\n",dest2);
    printf("拷贝后的字符串为%s\n",src2);
    printf("拷贝后的字符串为%s\n",src2+1);
    return 0;
}
