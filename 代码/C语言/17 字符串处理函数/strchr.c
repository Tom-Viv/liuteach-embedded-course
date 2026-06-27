#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char *s="hello,world";
    char c='l';
    printf("母串的首位置是%p\n",s);
    printf("查找l第一次出现的位置是%p\n",strchr(s,c));
    printf("查找l最后一次出现的位置是%p\n",strrchr(s,c));

    printf("第一次出现l的位置后面的字符串是%s\n",strchr(s,c));
    printf("最后一次出现l的位置后面的字符串是%s\n",strrchr(s,c));

    return 0;
}
