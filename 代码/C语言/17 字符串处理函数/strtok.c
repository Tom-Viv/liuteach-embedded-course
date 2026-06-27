#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char p1[]="apple,bnana,peach,watermelon,Jiaozi";
    char *p2=",";
    printf("没有分割后的字符串是%s\n",p1);
    char *tmp=strtok(p1,p2);

    while (tmp!=NULL)
    {
        printf("被分割后的字符串是%s\n",tmp);
        tmp=strtok(NULL,p2);
        
    }
    
    return 0;
}
