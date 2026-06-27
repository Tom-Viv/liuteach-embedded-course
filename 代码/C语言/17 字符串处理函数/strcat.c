#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char dest[1024]="hello,";
    char *src="teacher liu";
    strcat(dest,src);
    printf("strcat拼接后的字符串为%s\n",dest);

    strncat(dest,src,5);
    printf("strncat拼接后的字符串为%s\n",dest);

    return 0;
}
