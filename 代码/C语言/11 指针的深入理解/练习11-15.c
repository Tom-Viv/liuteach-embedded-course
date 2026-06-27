#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// // 11、用void型指针封装一个通用的内存交换函数，可交换任意类型的两个变量的值
// void my_memory_exchange(void *dest,void *source,int size)
// {
//     void *tmp=malloc(size);
//     memcpy(tmp,dest,size);
//     memcpy(dest,source,size);
//     memcpy(source,tmp,size);
//     free(tmp);

// }

// int main(int argc, char const *argv[])
// {
//     int arr[]={1,2,3,4,5};
//     int brr[]={6,7,8,9,0};
//     float crr[]={1.1,2.2,3.3,4.4,5.5};
//     float drr[]={5.5,6.6,7.7,8.8,9.9};
//     printf("交换前的值为：");
//     for (size_t i = 0; i < sizeof(crr)/sizeof(crr[0]); i++)
//     {
//         printf(" %f ",crr[i]);
//     }
//     printf("\n");

//     my_memory_exchange(crr,drr,sizeof(crr));

//     printf("交换后的值为：");
//     for (size_t i = 0; i < sizeof(crr)/sizeof(crr[0]); i++)
//     {
//         printf(" %f ",crr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// //12、分析并验证int (*p)[5]和int *p[5]的内存占用、类型区别与使用场景，编写代码示例说明
// int main(int argc, char const *argv[])
// {
//     int arr[5]={1,2,3,4,5};
//     //数组指针
//     int (*p1)[5]=&arr;
//     //指针数组
//     int *p2[5]={NULL};

//     printf("p1数组指针占用的内存大小是%zu个字节\n",sizeof(p1));
//     printf("p2指针数组占用的内存大小是%zu个字节\n",sizeof(p2));

//     printf("p1数组指针+1移动的步长大小是%d字节\n",((int)(p1+1)-(int)p1));

//     printf("p2指针数组+1移动的步长大小是%zu个字节\n",(p2+1)-p2);
//     return 0;
// }

// 13、用const关键字封装一个字符串拷贝函数，保证源字符串不会被误修改
// void my_strcpy(char *dest,const char *src)
// {
//     int i=0;
//     char tmp=0;
//     while (src[i]!='\0')
//     {
//         dest[i]=src[i];
//         i++;
//     }
//     dest[i]=src[i];
// }

// int main(int argc, char const *argv[])
// {
//     char str1[]="hello";
//     char str2[]="world";
//     printf("拷贝之前的字符串为%s\n",str1);
//     my_strcpy(str1,str2);
//     printf("拷贝之后的字符串为%s\n",str1);
//     return 0;
// }

// //14、单词内部反转（保持单词顺序不变）
// // 要求：输入一个英文句子，将每个单词内部的字符顺序反转，但保持单词之间的顺序不变。
// // - 单词之间用单个空格分隔
// // - 句子首尾没有空格
// // - 只包含英文字母和空格
// // 示例：输入："Hello World C Language"输出："olleH dlroW C egaugnaL"

// // //反转单词
// void reversal(char * strat ,char *end)
// {
//     char tmp=0;
//     while (strat<end)
//     {
//         tmp=*strat;
//         *strat=*end;
//         *end=tmp;
//         strat++;
//         end--;
//     }
// }

// void select_word(char *dest)
// {
//     int i=0;
//     char *strat=NULL;
//     char *end=NULL;
//     int size=0;
//     int str_len=strlen(dest);
//     while (str_len--)
//     {
//         size++;
//         if (dest[i]==' '||dest[i]=='\0')
//         {
//             size--;
//             strat=&dest[i-size];
//             end=&dest[i-1];
//             reversal(strat,end);
//             size=0;
//         }
//         i++;

//     }
// }

// int main(int argc, char const *argv[])
// {
//     char arr[]="Hello World ABC Language Liu Teacher";
//     select_word(arr);
//     printf("反转后的单词为%s\n",arr);
//     return 0;
// }

// 7.字符串全部替换（处理重叠情况）
// 要求：实现一个函数，将字符串中所有出现的子串old_str替换为new_str。
// - 必须处理重叠替换的情况（例如将 "aaaaa" 中的 "aa" 替换为 "b"，应得到 "bba" 而不是 "bbb"）
// - 假设替换后的字符串长度不超过原数组大小
// 示例：输入："aaaaa"，替换"aa"为"b"输出："bba"

void change_old_str(char *str, char *new_str)
{
    int i = 0;

    int str_len = strlen(str);
    printf("程序运行到了第%d行\n",__LINE__);
    while (str_len --)
    {
        if (str[i] == str[i + 1])
        {
            printf("程序运行到了第%d行\n",__LINE__);
            str[i] = new_str[0];
            for (int j = 1; str_len-i ; j++)
            {
                printf("程序运行到了第%d行\n",__LINE__);
                str[j] = str[j + 1]; 
            }
            str_len--;
            i++;
        }
        else
        {
            i++;
        }
    }
}

int main(int argc, char const *argv[])
{
    char arr[] = "aaaaa";
    char brr[1024] = "b";
    change_old_str(arr, brr);
    printf("去重后的字符串为%s\n", brr);
    return 0;
}
