#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *p1="abcdef";
    char *p2="abcdf";
    char *p3="abc";
    printf("strcmp(abcdef和abcdf)的值为%d\n",strcmp(p1,p2));

    printf("strcmp(abcdf和abc)的值为%d\n",strcmp(p2,p3));
    printf("strcmp(abcdf和abc)的值为%d\n",strncmp(p2,p3,3));
    return 0;
}
