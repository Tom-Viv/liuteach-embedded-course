#include <stdio.h>

// 默认对齐的结构体：占用8字节（char占1，填充3，int占4）
struct Default {
    char c;
    int i;
};

// 紧凑排列的结构体：占用5字节（无填充）
struct Packed {
    char c;
    int i;
} __attribute__((packed));

int main(int argc, char const *argv[])
{
    printf("sizeof(Default) = %zu\n", sizeof(struct Default));  // 输出8
    printf("sizeof(Packed) = %zu\n", sizeof(struct Packed));    // 输出5
    return 0;
}


