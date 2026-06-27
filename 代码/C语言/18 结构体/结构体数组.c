#include <stdio.h>
// 姓名、性别、年龄、身高、身长、食量
typedef struct __cat
{
    char *name;
    char sex;
    int age;
    int height;
    float food;

}Cat,*P_Cat;


int main(int argc, char const *argv[])
{
    //定义语法：struct 结构体标签 数组名[数组长度];
    Cat cats[5]={
        {"小花",'g',3,40,2},
        {.age=500,.food=500,.height=500,.name="鲲鹏",.sex='?'},
        {.name="龙傲天",.age=1,.food=1.5,.height=10,.sex='b'},
        {.name="小白",.age=13,.food=1.5,.height=16,.sex='g'},
        {.name="小不点",.age=2,.food=1.8,.height=18,.sex='b'},
    };
    // for (size_t i = 0; i < 5; i++)
    // {
    //     printf("通过结构体数组的方式访问结构体成员%s\n",cats[i].name);
    //     printf("通过结构体数组的方式访问结构体成员%c\n",cats[i].sex);
    //     printf("通过结构体数组的方式访问结构体成员%d\n",cats[i].age);
    //     printf("通过结构体数组的方式访问结构体成员%d\n",cats[i].height);
    //     printf("通过结构体数组的方式访问结构体成员%.3f\n",cats[i].food);
    // }
    
    printf("结构体数组的第三个成员是%s\n",cats[2].name);
    printf("结构体数组的第三个成员是%s\n",(cats+2)->name);
    printf("结构体数组的第二个成员是%s\n",(*(cats+1)).name);
    return 0;
}
