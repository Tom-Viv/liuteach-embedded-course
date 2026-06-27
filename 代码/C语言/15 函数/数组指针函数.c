#include <stdio.h>
#include <stdlib.h>


typedef  int (*p)[5];

p create(void)
{
    p ptr_arr=calloc(5,sizeof(int));
    if (ptr_arr==NULL)
    {
        printf("申请内存失败\n");
    }

    for (size_t i = 0; i < 5; i++)
    {
        *((*ptr_arr)+i)=i;  
    }
    
    return ptr_arr;
}

int main(int argc, char const *argv[])
{
    p ptr=create();
    printf("通过数组指针函数返回的值为：");
    for (size_t i = 0; i < 5; i++)
    {
        printf(" %d ",*((*ptr)+i));
    }
    printf("\n");
    return 0;
}
