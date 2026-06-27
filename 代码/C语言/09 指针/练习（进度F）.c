#include <stdio.h>

// 1、给定一个字符串，进行反转（字符串是：Hello Word！）
// int main(int argc, char const *argv[])
// {
//     char arr[]="Hello,World!";
//     char *p1=&arr[0];
//     char *p2=&arr[(sizeof(arr)/sizeof(char))-1-1];
//     char tmp=arr[0];
//     printf("没有反转的字符串是%s\n",arr);
//     while (p1<p2)
//     {
//         tmp=*p1;
//         *p1=*p2;
//         *p2=tmp;
//         p1++;
//         p2--;
//     }
//     printf("反转后的字符串是%s\n",arr);
//     return 0;
// }

// 2、把上面的字符串进行大小写翻转
// int main(int argc, char const *argv[])
// {
//     char arr[]="Hello,World!";
//     printf("没有进行大小写反转的字符串是%s\n",arr);
//     for (size_t i = 0; i < (sizeof(arr)/sizeof(char)); i++)
//     {
//         if (arr[i]>'A'&&arr[i]<'Z')
//         {
//             arr[i]=arr[i]+32;
//         }
//         else if (arr[i]>'a'&&arr[i]<'z')
//         {
//             arr[i]=arr[i]-32;
//         }
//         else
//         {
//             arr[i]=arr[i];
//         }
//     }
//     printf("大小写反转的字符串是%s\n",arr);
//     return 0;
// }

// 3、 实现把一个字符串循环右移n 位。如"abcdehi"，  n = 2，则输出为 ehiabcd .
void move_string(int n)
{
    char arr[]="abcdehi";
    printf("右移前的字符串是%s\n",arr);

    char *head=arr;
    char *tail=&arr[(sizeof(arr)/sizeof(char))-1-1];
    char tmp=0;

    for (size_t i = 0; i <n; i++)
    {
        tmp=*tail;
        for (size_t i = (sizeof(arr)/sizeof(char))-1-1; i >0; i--)
        {
            arr[i]=arr[i-1];
        }
        *head=tmp;
    }
    printf("右移后的字符串是%s\n",arr);
}

int main(int argc, char const *argv[])
{
    move_string(2);

    return 0;
}
