#include <stdint.h>
#include <stdio.h>
typedef struct node {
    int8_t a;
    int64_t b;
    int16_t c;

}Node __attribute__((packed)); // 压实结构体，无填充字节

int main()
{
    printf("未定义零长数组的结构体大小为%zu\n",sizeof(Node));

    return 0;
}