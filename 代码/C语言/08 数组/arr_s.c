#include <stdio.h>
int main()
{
    // 第一含义场景：代表整个匿名数组
    printf("\"abcd\"数组总大小：%zu字节\n", sizeof("abcd")); // 输出5字节（含'\0'）
    printf("\"abcd\"整个数组地址：%p\n", &"abcd");
    // 第二含义场景：代表匿名数组首元素的地址
    printf("\"abcd\"第2个字符：%c\n", "abcd"[1]); // 输出b
    char *p1 = "abcd";                            // 指向匿名数组首元素地址
    char *p2 = "abcd" + 1;                        // 指向匿名数组第2个元素地址
    printf("*p1:%c *p2:%c\n", *p1, *p2);          // 输出*p1:a *p2:b


    char a =a;
    char arr[10]="hello";
    char *p="hello";
    return 0;
}