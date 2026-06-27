#include <stdio.h>

int main(int argc, char const *argv[])
{
    //定义一个字符序列
    char s1[8]={'h','e','l','l','o'};
    char s3[]={'h','e','l','l','o','\0'};
  
    printf("s1的数据为%s\n",s1);
    printf("s1的数据为%s\n",s1);
    for (size_t i = 0; i < sizeof(s1)/sizeof(char); i++)
    {
        printf("单独打印s1里面的数据为%c\n",s1[i]);
    }
    for (size_t i = 0; i < sizeof(s3)/sizeof(char); i++)
    {
        printf("单独打印s3里面的数据为%c\n",s3[i]);
    }
    
    //定义一个字符串
    char s2[]={"hellofdshafdsjfkadsfasdhfiuadsfhydsl"};
    for (size_t i = 0; i < sizeof(s2)/sizeof(char); i++)
    {
        printf("单独打印s2里面的数据为%c\n",s2[i]);
    }
    char s4[5]="hello";
    return 0;
}
