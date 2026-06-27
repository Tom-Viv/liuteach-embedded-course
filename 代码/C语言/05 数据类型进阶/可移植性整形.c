#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    printf("long的占用字节数为%d\n",sizeof(long));
    printf("int64_t的占用字节数为%d\n",sizeof(int64_t));
    return 0;
}
