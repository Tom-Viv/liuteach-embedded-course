#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("char类型占用的空间是%zu\n",sizeof(char));
    printf("int类型占用的空间是%zu\n",sizeof(int));
    printf("float类型占用的空间是%zu\n",sizeof(float));
    return 0;
}
