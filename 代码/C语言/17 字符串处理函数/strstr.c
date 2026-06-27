#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char *str1="hello,world,hello,teacher liu";
    char *str2="world,hello,teacher liu";
    char *sub="hello";

    char *res1=strstr(str1,sub);
    if (res1==NULL)
    {
        printf("res1:没有查到想要查找的子串\n");
    }
    else
    {
        printf("res1:该子串母串第一次出现的位置是%p\n",res1);
        printf("res1:从这个位置起的字符串是%s\n",res1);
    }

    char *res2=strstr(str2,sub);
    if (res2==NULL)
    {
        printf("res2:没有查到想要查找的子串\n");
    }
    else
    {
        printf("str2:母串的起始位置是%p\n",str2);
        printf("res2:该子串母串第一次出现的位置是%p\n",res2);
        printf("res2:从这个位置起的字符串是%s\n",res2);
    }
    
    return 0;
}
