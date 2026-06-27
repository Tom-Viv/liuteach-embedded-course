#include <stdio.h>

//交换两个数的值
//第一步，设计函数名swap
//第二步：参数->需要两个参数，这两个参数传递地址
//第三步：不需要返回值
//以上三步为设计函数头
//现在开始设计函数体
/*
  函数体:
    例如：如果把b的值直接给a，则a的值就会丢失
    所以需要多定义一个变量用来存储a的值
    再把b的值赋值给a
*/

//交换两个数的值
//a,b两个参数，叫做形参
//而形参就是系统对实参的一个拷贝，并且形参是局部变量
void swap(int a,int b)
{
    int c = 0;
    c=a;  
    a=b;
    b=c;
}

int main(int argc, char const *argv[])
{
    int num1=123;
    int num2=456;
    printf("交换之前num的值为%d\n",num1);
    swap(num1,num2);//实参
    printf("交换之前num的值为%d\n",num1);

    return 0;
}
