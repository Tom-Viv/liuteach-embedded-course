#include <stdio.h>
int main()
{
    int a = 123;
    int b = 999;
    printf("初始值 a:%d\n", a);

    int *p = &a;
    *p = 345; // 正确，通过普通指针修改目标数据
    printf("通过p1修改后 a:%d\n", a);


    // 两种等价的常目标指针写法
    // const修饰指针指向的目标类型，指针的指向可以修改，但不可通过该指针修改指向的目标数据
    const int *p1 = &a;
    int const *p2 = &a;

    // *p2 = 567; // 错误，不可通过常目标指针修改目标数据，编译报错
    a = 888; // 正确，变量本身可直接修改，仅限制通过p2/p3修改
    printf("直接修改后 a:%d\n", a);

    p2 = &b; // 正确，常目标指针可修改指向
    printf("修改p2指向后 *p2:%d\n", *p2);

    return 0;
}
