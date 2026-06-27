#include <stdio.h>
#include <string.h>

typedef struct stu
{
    char name[15];
    int age;
    float score;
}Stu;

int main(int argc, char const *argv[])
{

    //定义变量时，顺序初始化
    struct stu zhangsan={"张三",18,9.9};
    printf("通过结构体输出张三的信息%d\n",zhangsan.age);
    printf("通过结构体输出张三的信息%s\n",zhangsan.name);
    printf("通过结构体输出张三的信息%.2f\n",zhangsan.score);
    printf("--------------------------------------------\n");
    //定义变量时，指定成员初始化
    Stu lisi={
        .age=500,
        .score=8.8,
        .name="李四"
    };
    printf("通过结构体输出李四的信息%d\n",lisi.age);
    printf("通过结构体输出李四的信息%s\n",lisi.name);
    printf("通过结构体输出李四的信息%.2f\n",lisi.score);
    printf("--------------------------------------------\n");
    //定义变量后，进行赋值
    Stu wangwu;
    wangwu.age=18;
    wangwu.score=9.9;
    memcpy(wangwu.name,"王五",7);
    printf("通过结构体输出王五的信息%d\n",wangwu.age);
    printf("通过结构体输出王五的信息%s\n",wangwu.name);
    printf("通过结构体输出王五的信息%.2f\n",wangwu.score);
    printf("--------------------------------------------\n");
    return 0;
}

