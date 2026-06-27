#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct stu
{
    char name[15];
    int age;
    float score;
}Stu,*P_Stu;

int main(int argc, char const *argv[])
{
    struct stu *ptr1;
    ptr1->age=888;
    memcpy(ptr1->name,"张三",7);
    ptr1->score=5.5;
    printf("通过结构体输出张三的信息%d\n",ptr1->age);
    printf("通过结构体输出张三的信息%s\n",ptr1->name);
    printf("通过结构体输出张三的信息%.2f\n",ptr1->score);
    printf("--------------------------------------------\n");
    P_Stu ptr2=malloc(sizeof(Stu));
    ptr2->age=999;
    memcpy(ptr1->name,"李四",7);
    ptr2->score=100;
    printf("通过结构体输出张三的信息%d\n",ptr2->age);
    printf("通过结构体输出张三的信息%s\n",ptr2->name);
    printf("通过结构体输出张三的信息%.2f\n",ptr2->score);
    printf("--------------------------------------------\n");
    free(ptr2);
    return 0;
}

