#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // 1. 申请10个int大小的堆内存，约40字节
    int *p1 = malloc(10 * sizeof(int));
    if(p1 == NULL) // 必须判断申请是否成功
    {
        perror("malloc failed");
        return -1;
    }
    // 手动清零
    bzero(p1, 10 * sizeof(int));

    // 2. 申请5个int大小的堆内存，自动清零
    int *p2 = calloc(5, sizeof(int));
    if(p2 == NULL)
    {
        perror("calloc failed");
        free(p1); // 申请失败，释放已申请的内存
        return -1;
    }

    // 3. 调整p2的内存大小为10个int
    int *p3 = realloc(p2, 10 * sizeof(int));
    if(p3 == NULL)
    {
        perror("realloc failed");
        free(p1);
        free(p2);
        return -1;
    }
    p2 = p3; // 调整成功，更新指针指向

    // 4. 释放堆内存
    free(p1);
    free(p2);
    // 释放后将指针置空，避免野指针
    p1 = NULL;
    p2 = NULL;

    return 0;
}