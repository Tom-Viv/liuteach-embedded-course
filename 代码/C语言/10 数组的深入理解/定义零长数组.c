#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 10

typedef struct __node
{
    char len;
    char data[0];
}Node,*P_Node;


int main(int argc, char const *argv[])
{
    P_Node p=malloc(sizeof(Node)+ARR_LEN);
    p->len=10;
    for (size_t i = 0; i < ARR_LEN; i++)
    {
        p->data[i]='a'+i;
        printf("零长数组额外分配的内存的存储数据为%c\n",p->data[i]);
    }
    free(p);
    return 0;
}
