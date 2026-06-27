#include <stdio.h>
#include <string.h>

// 找出母串中所有"const"子串的起始地址，并统计出现次数
// 解题思路：
    // 1、利用strstr函数，返回的是第一次出现子串的地址
    // 2、肯定要对母串的指针进行偏移
    // 3、要有一个循环来不断查找，结束条件：通过结束符去判断
    // 4、在循环打印起始地址，并且搞一个变量，在循环里i++；
    // 5、退出循环之后，打印i值
int find_sub_time(const char *dest, const char *sub)
{
    const char *tmp = dest;
    int sub_len=strlen(sub);
    int i = 0;
    while (tmp != 0)
    {
        tmp = strstr(tmp, sub);
        if (tmp == NULL)
        {
            break;
        }
        else
        {
            printf("子串出现位置是%p\n", tmp);
        }
        i++;
        tmp=tmp+sub_len;
    }

    printf("子串总共出现了%d次\n",i);
}

int main(int argc, char const *argv[])
{
    char *dest="consttinjkdsafconstsadfsconstasfdconstfasdconstfasconstfasdconstfaconstfaconstconst";
    char *sub="const";
    find_sub_time(dest,sub);

    return 0;
    


}
