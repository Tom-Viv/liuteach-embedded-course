#include <stdio.h>
#include <string.h>

// 1.编写程序，使用strstr查找用户输入的子串在母串中的位置
int main()
{
    char str[100]; // 存储母串
    char sub[50];  // 存储要查找的子串

    printf("请输入母串：");
    fgets(str, sizeof(str), stdin);
    // 去掉fgets读取时末尾自带的换行符
    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    printf("请输入要查找的子串：");
    fgets(sub, sizeof(sub), stdin);
    len = strlen(sub);
    if (sub[len - 1] == '\n')
    {
        sub[len - 1] = '\0';
    }

    // 调用标准库strstr：返回子串首次出现的起始地址，没找到返回NULL
    char *pos = strstr(str, sub);

    if (pos != NULL)
    {
        // 指针相减 = 起始下标（C语言数组下标从0开始）
        int index = pos - str;
        printf("子串首次出现的下标：%d（从0开始计数）\n", index);
        printf("对应第 %d 个字符的位置\n", index + 1);
    }
    else
    {
        printf("母串中没有找到该子串\n");
    }

    return 0;
}

// 2.编写程序，使用strtok将用户输入的一行句子按空格分割成单词

int main()
{
    char sentence[200];
    printf("请输入一行英文句子（单词用空格分隔）：");
    fgets(sentence, sizeof(sentence), stdin);

    // 去掉末尾换行符
    int len = strlen(sentence);
    if (sentence[len - 1] == '\n')
    {
        sentence[len - 1] = '\0';
    }

    printf("分割后的单词：\n");
    // 第一次调用：传入原字符串 + 分隔符（空格）
    char *word = strtok(sentence, " ");
    int count = 0;

    // 循环取出所有单词
    while (word != NULL)
    {
        count++;
        printf("第%d个单词：%s\n", count, word);
        // 后续调用：第一个参数传NULL，继续从上一次的位置分割
        word = strtok(NULL, " ");
    }

    if (count == 0)
    {
        printf("未输入有效单词\n");
    }

    return 0;
}

// 3.编写程序，使用strncpy和strncat安全地实现字符串的拷贝和拼接
int main()
{
    char dest[100] = "Hello";  // 目标字符串，空间必须足够大
    char src[] = "World12345"; // 源字符串
    int copy_num = 3;          // 要拷贝的字符数
    int cat_num = 5;           // 要拼接的字符数

    printf("原始目标串：%s\n", dest);

    // 1. strncpy：最多拷贝copy_num个字符
    strncpy(dest, src, copy_num);
    // 重点：strncpy不会自动加结束符'\0'，必须手动补
    dest[copy_num] = '\0';
    printf("拷贝%d个字符后：%s\n", copy_num, dest);

    // 2. strncat：最多拼接cat_num个字符，会自动补'\0'
    strncat(dest, src, cat_num);
    printf("拼接%d个字符后：%s\n", cat_num, dest);

    return 0;
}

// 4.自行实现strlen函数，功能与标准库一致
int my_strlen(char str[])
{
    int count = 0;
    // 遍历字符串，直到遇到结束符'\0'就停止
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char str[100];
    printf("请输入一个字符串：");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    printf("自定义函数计算长度：%d\n", my_strlen(str));
    printf("标准库验证长度：%lu\n", strlen(str));

    return 0;
}

#include <stdio.h>
#include <string.h>

// 自定义my_strcpy：把src完整拷贝到dest，返回dest的首地址
char *my_strcpy(char dest[], char src[])
{
    int i = 0;
    // 逐个拷贝字符，直到把'\0'也拷贝完成
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // 补上结束符
    return dest;
}

// 5.自行实现strcpy函数，功能与标准库一致
int main()
{
    char src[100];
    char dest[100];

    printf("请输入源字符串：");
    fgets(src, sizeof(src), stdin);
    int len = strlen(src);
    if (src[len - 1] == '\n')
    {
        src[len - 1] = '\0';
    }

    my_strcpy(dest, src);
    printf("拷贝后的目标串：%s\n", dest);

    return 0;
}

// 6.自行实现strcmp函数，功能与标准库一致

// 自定义my_strcmp：逐位比较两个字符串
// 返回值规则：
// s1 > s2  → 返回正数
// s1 == s2 → 返回0
// s1 < s2  → 返回负数
int my_strcmp(char s1[], char s2[])
{
    int i = 0;
    // 两个串都没结束，且当前字符相等时，继续往后比
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            // 字符不同，直接返回ASCII码的差值
            return s1[i] - s2[i];
        }
        i++;
    }
    // 其中一个串结束了，比较最后一位（'\0'的ASCII是0）
    return s1[i] - s2[i];
}

int main()
{
    char str1[100], str2[100];

    printf("请输入第一个字符串：");
    fgets(str1, sizeof(str1), stdin);
    int len = strlen(str1);
    if (str1[len - 1] == '\n')
        str1[len - 1] = '\0';

    printf("请输入第二个字符串：");
    fgets(str2, sizeof(str2), stdin);
    len = strlen(str2);
    if (str2[len - 1] == '\n')
        str2[len - 1] = '\0';

    int res = my_strcmp(str1, str2);
    if (res > 0)
    {
        printf("第一个字符串更大\n");
    }
    else if (res < 0)
    {
        printf("第二个字符串更大\n");
    }
    else
    {
        printf("两个字符串完全相等\n");
    }

    return 0;
}

// 7.实现memcpy 函数
// 自定义my_memcpy：按字节拷贝内存数据
// 参数：dest目标地址，src源地址，count要拷贝的字节数
// 返回值：目标内存的首地址
void *my_memcpy(void *dest, const void *src, unsigned int count)
{
    // void*不能直接操作，转成char*按字节逐个拷贝
    char *d = (char *)dest;
    const char *s = (const char *)src;

    unsigned int i;
    for (i = 0; i < count; i++)
    {
        d[i] = s[i];
    }
    return dest;
}

int main()
{
    // 测试1：拷贝字符串
    char src_str[] = "Hello World";
    char dest_str[20];
    my_memcpy(dest_str, src_str, sizeof(src_str));
    printf("拷贝字符串：%s\n", dest_str);

    // 测试2：拷贝整型数组（体现memcpy通用性）
    int src_arr[] = {1, 2, 3, 4, 5};
    int dest_arr[5];
    my_memcpy(dest_arr, src_arr, sizeof(src_arr));
    printf("拷贝整型数组：");
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", dest_arr[i]);
    }
    printf("\n");

    return 0;
}

// 自定义my_strstr：查找sub在str中首次出现的位置
// 找到返回起始地址，没找到返回NULL
char *my_strstr(char str[], char sub[])
{
    // 边界处理：子串为空时，标准库规定直接返回原串
    if (sub[0] == '\0')
    {
        return str;
    }

    int i = 0; // 主串的遍历下标
    while (str[i] != '\0')
    {
        int j = 0;    // 子串的遍历下标
        int temp = i; // 记录主串当前的匹配起点

        // 从temp位置开始，和子串逐位匹配
        while (str[temp] != '\0' && sub[j] != '\0' && str[temp] == sub[j])
        {
            temp++;
            j++;
        }

        // 子串全部匹配完，说明找到了
        if (sub[j] == '\0')
        {
            return &str[i]; // 返回主串中匹配的起始地址
        }

        i++; // 匹配失败，主串后移一位，重新开始
    }

    return NULL; // 主串遍历完都没找到
}

// 8.实现strstr 函数
int main()
{
    char str[100], sub[50];

    printf("请输入母串：");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    printf("请输入要查找的子串：");
    fgets(sub, sizeof(sub), stdin);
    len = strlen(sub);
    if (sub[len - 1] == '\n')
        sub[len - 1] = '\0';

    char *pos = my_strstr(str, sub);
    if (pos != NULL)
    {
        int index = pos - str;
        printf("子串首次出现的下标：%d（从0开始）\n", index);
    }
    else
    {
        printf("未找到子串\n");
    }

    return 0;
}