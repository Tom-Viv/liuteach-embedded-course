#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,4,5};
    int *p1=arr;
    int (*p2)[5]=&arr;
    char *p4=&arr;
    void *p3=arr;
    printf("p1的地址%p\n",p1);
    printf("p1+1的移动情况%p\n",p1+1);
    printf("p2的地址%p\n",p2);
    printf("p2+1的移动情况%p\n",p2+1);
    printf("p3的地址%p\n",p3);
    printf("p3+1的移动情况%p\n",p3+1);
    printf("p4的地址%p\n",p4);
    printf("p4+1的移动情况%p\n",p4+1);
    return 0;
}
