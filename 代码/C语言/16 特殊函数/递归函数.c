#include <stdio.h>

void display_num(int n)
{
    {
        //最开始n是5，我函数传进去的参数是5
        if (n<=0)
            return ;
            {
                //最开始n是4，我函数传进去的参数是4
                if (n<=0)
                    return ;
                    {
                        //最开始n是3，我函数传进去的参数是3
                        if (n<=0)
                            return ;
                        {
                            //最开始n是2，我函数传进去的参数是2
                            if (n<=0)
                                return ;
                            {
                                //最开始n是1，我函数传进去的参数是1
                                if (n<=0)
                                    return ;
                                {
                                    //最开始n是0，我函数传进去的参数是1
                                    if (n<=0)
                                        return ;
                                    display_num(n-1);
                                }
                                printf(" %d ",n);
                            }
                            printf(" %d ",n);
                        }
                        printf(" %d ",n);
                    }
                printf(" %d ",n);
            }
        printf(" %d ",n); 
    }
}



int main(int argc, char const *argv[])
{
    display_num(5);
    return 0;
}
