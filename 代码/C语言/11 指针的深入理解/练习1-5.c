#include <stdio.h>
#include <stdlib.h>

// // 1、编写代码验证char型指针指向字符串常量时的只读属性，尝试修改字符串内容，观察程序运行结果
// int main(int argc, char const *argv[])
// {
//     //这个字符串被系统放到了rodata段，只读数据段，不允许被修改
//     const char *ptr ="hello,teacher";
    

//     // ptr[2]='h';
//     // char **p_ptr=&ptr;
//     // *p_ptr[2]='h';

//     printf("此时的字符串为%s\n",ptr);
//     return 0;
// }

// // 2、定义一级、二级、三级指针，通过三级指针修改普通变量的值，并打印各级指针的地址与指向
// int main(int argc, char const *argv[])
// {
//     int a=123;
//     printf("没通过三级指针修改之前a的值为%d\n",a);
//     int *p=&a;
//     int **p_p=&p;
//     int ***p_p_p=&p_p;
//     ***p_p_p=456;
//     printf("通过三级指针修改之前a的值为%d\n",a);

//     printf("变量a的地址为%p\n",&a);
//     printf("一级指针的地址为%p,一级指针的存储的地址为%p\n",&p,p);
//     printf("二级指针的地址为%p,二级指针的存储的地址为%p\n",&p_p,p_p);
//     printf("三级指针的地址为%p,三级指针的存储的地址为%p\n",&p_p_p,p_p_p);
//     return 0;
// }


// 3、使用指针万能拆解法，分析并写出以下复杂指针的含义：int (*p[10])(int, char *)
// typedef struct group
// {
//     char a; //0 1 2 3
//     int b;//4 5 6 7
//     short c;//8 9 10 11 
// }Group,*P_Group;

// int main(int argc, char const *argv[])
// {
//     // int (*p[10])(int, char *);
//     // int (*p)[10];
//     P_Group ptr;
//     ptr++;
//     return 0;
// }

// 4、编写代码验证void型指针的使用规则，实现用同一块void型内存分别存储int、float、char类型数据
// void类型的指针，只能通过解引用的方式去赋值,更改void类型的指针的指向时，不能进行强转
int main(int argc, char const *argv[])
{
    void *ptr=NULL;
    int a= 123;
    ptr = &a;
    printf("定义一个void类型的指针，强转成int *并赋值为%d\n",*(int *)ptr);

    // float b= 1.23;
    // *(float *)ptr=b;
    // printf("定义一个void类型的指针，强转成float *并赋值为%f\n",*(float *)ptr);
    return 0;
}

//5、分别定义常量指针与常目标指针，编写代码验证二者的核心区别（左定值，右定向）
int main(int argc, char const *argv[])
{
    const char *str;        //常量指针
    char * const str1;     //常目标指针

    return 0;
}

