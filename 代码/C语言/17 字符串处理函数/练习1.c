#include <stdio.h>
#include <string.h>

//1、使用strstr查找用户输入的子串在母串中的位置
// int main(int argc, char const *argv[])
// {
//     char str[100];
//     char sub[50];
//     printf("请输入母串：\n");
//     fgets(str,100,stdin);
//     int len = strlen(str);
//     if (str[len - 1] == '\n')
//     {
//         str[len - 1] = '\0';
//     }
//     printf("请输入子串：\n");
//     fgets(sub,50,stdin);
//     len = strlen(sub);
//     if (sub[len - 1] == '\n')
//     {
//         sub[len - 1] = '\0';
//     }
//     char *p=strstr(str,sub);
//     printf("str:%s",str);
//     printf("sub:%s",sub);
//     printf("通过用户输入的母串和子串，查找子串的位置是%p\n",p);
//     return 0;
// }

//2、使用strtok将用户输入的一行句子按空格分割成单词
// int main(int argc, char const *argv[])
// {
//     char str[100];
//     char c=' ';
//     printf("请输入母串：\n");
//     fgets(str,100,stdin);
//     int len=strlen(str);
//     if (str[len-1]=='\n')
//     {
//         str[len-1]='\0';
//     }
//     printf("没有分割后的字符串是%s\n",str);
//     char *tmp=strtok(str,&c);
//     while (tmp!=NULL)
//     {
//         printf("被分割后的字符串是%s\n",tmp);
//         tmp=strtok(NULL,&c);
//     }
//     return 0;
// }

// 3、使用strncpy和strncat安全地实现字符串的拷贝和拼接
// int main(int argc, char const *argv[])
// {
//     char str[256]="hello";
//     char sub[128]=",teacher";
//     strncat(str,sub,strlen(sub));
//     printf("拼接后的母串为%s\n",str);
//     strncpy(str,sub,strlen(sub));
//     //strncpy不会自动补充结束符，所以需要用户手动添加
//     str[strlen(sub)]='\0';         
//     printf("拷贝后的母串为%s\n",str);
//     return 0;
// }

// 4、自行实现strlen函数，功能与标准库一致
// size_t my_strlen(char * str)
// {
//     char *tmp=str;
//     size_t i=0;
//     while (tmp[i]!='\0')
//     {
//         i++;
//     }
//     return i;
// }
// int main(int argc, char const *argv[])
// {
//     char str[256];
//     printf("请输入字符串：");
//     fgets(str,sizeof(str),stdin);
//     int i=strlen(str);
//     if (str[i-1]=='\n')
//     {
//         str[i-1]='\0';
//     }
//     printf("用户输入的字符串的长度为%zu\n",my_strlen(str));\
//     return 0;
// }

//5、自行实现strcpy函数
// char *my_strcpy(char *dest,char *src)
// {
//     int i=0;
//     while (src[i]!='\0')
//     {
//         dest[i]=src[i];
//         i++;
//     }
//     dest[i]='\0';
//     return dest;
// }
// int main(int argc, char const *argv[])
// {
//     char dest[256]="hello";
//     char src[128]="teacher";
//     my_strcpy(dest,src);
//     printf("拷贝后的字符串是%s\n",dest);
//     return 0;
// }

// 6、自行实现strcmp函数
// int my_strcmp(char *dest,char *src)
// {
//     int i=0;
//     while (src[i]!='\0'||dest[i]!='\0')
//     {
//         if (src[i]!=dest[i])
//         {
//             return dest[i]-src[i];
//         }
//         i++;
//     }
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     char str[256];
//     char sub[128];
//     printf("请输入母串：\n");
//     fgets(str,100,stdin);
//     int len = strlen(str);
//     if (str[len - 1] == '\n')
//     {
//         str[len - 1] = '\0';
//     }
//     printf("请输入子串：\n");
//     fgets(sub,50,stdin);
//     len = strlen(sub);
//     if (sub[len - 1] == '\n')
//     {
//         sub[len - 1] = '\0';
//     }     
//     printf("通过my_strcmp比较的值为%d\n",my_strcmp(str,sub));
//     return 0;
// }

//7、实现memcpy函数
// void *my_memcpy(void *dest,const void *src,size_t n)
// {
//     char *dest1=(char *)dest;
//     char *src1=(char *)src;
//     for (size_t i = 0; i < n; i++)
//     {
//         dest1[i]=src1[i];
//     }
//     dest=dest1;
//     return dest;
// }
// int main(int argc, char const *argv[])
// {
//     char dest[256]="hello";
//     char src[128]="teacher";
//     my_memcpy(dest,src,strlen(src));
//     printf("通过my_memcpy拷贝的数据为%s\n",dest);
//     int arr[10]={1,2,3,4,5,6};
//     int brr[10]={7,8,9,0,1,2};
//     my_memcpy(arr,brr,sizeof(brr));
//     for (size_t i = 0; i < 6; i++)
//     {
//         printf("通过my_memcpy拷贝的数据为%d\n",arr[i]);
//     }
//     return 0;
// }

//8、实现strstr函数
// char *my_strstr(char *dest,char *src)
// {
//     int i=0;
//     while (dest[i]!='\0')
//     {
//         int k=i;
//         int j=0;
//         while (src[j]!='\0'&&dest[k]!='\0'&&src[j]==dest[k])
//         {
//             j++;
//             k++;
//         }
//         if (src[j]=='\0')
//         {
//             return &dest[k-strlen(src)];
//         }
//         if (dest[i]=='\0')
//         {
//             printf("在母串中没有找到子串\n");
//             return NULL;
//         }
//         i++;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     char str[256];
//     char sub[128];
//     printf("请输入要查找的母串：");
//     fgets(str,sizeof(str),stdin);
//     int i=strlen(str);
//     if (str[i-1]=='\n')
//     {
//         str[i-1]='\0';
//     }
//     printf("请输入要查找的子串：");
//     fgets(sub,sizeof(sub),stdin);
//     i=strlen(sub);
//     if (sub[i-1]=='\n')
//     {
//         sub[i-1]='\0';
//     }
//     printf("              母串的起始位置是%p\n",str);
//     printf("通过my_strstr查找到的子串位置是%p\n",my_strstr(str,sub));
//     return 0;
// }
