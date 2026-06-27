#include <stdio.h>
int main()
{
    int a = 123;
    int b = 999;
    printf("初始值 a:%d\n", a);

    // int *p = &a;
    // // *p = 456; // 正确，通过指针修改指向的目标数据
    // // printf("通过p修改后 a:%d\n", a);

    // p = &b; // 正确，修改普通指针的指向
    // printf("修改p指向后 *p:%d\n", *p);

    // 常量指针：const修饰指针本身
    int * const p1 = &a;
    *p1 = 789; // 正确，通过常量指针修改指向的目标数据
    printf("通过p1修改后 a:%d\n", a);



    // // p1 = &b; // 错误，常量指针不可修改指向，编译报错

    return 0;
}
