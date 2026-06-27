#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=1345;
    char *p1=&a;
    int  *p2=&a;

    printf("a的值为：%d，a的地址是：%p\n",a,&a);
    printf("char *p1的里面的值为：%p，p1的地址是：%p\n",p1,&p1);
    printf("int  *p2的里面的值为：%p，p2的地址是：%p\n",p2,&p2);
    
    return 0;
}
