#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *string = "During his stay in Serbia, $3000, (xuedao0163.com)(central and Eastern European (CEE)";
    int letters = 0, digits = 0, specials = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        char c = string[i];
        // 手动判断英文字母
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            letters++;
        }
        // 手动判断数字
        else if (c >= '0' && c <= '9')
        {
            digits++;
        }
        // 剩余所有字符均为特殊字符
        else
        {
            specials++;
        }
    }

    printf("统计结果：\n");
    printf("字母个数：%d\n", letters);
    printf("数字个数：%d\n", digits);
    printf("特殊字符个数：%d\n", specials);

    return 0;
}

int main(int argc, char const *argv[])
{
    char *str = "Happy families, a prosperous nation and a harmonious world";
    int word_count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            if (!in_word)
            {
                word_count++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    printf("单词总数：%d\n", word_count);
    return 0;
}