#include "include.h"

// 抽取英雄的界面菜单
void draw_admin(void)
{
    draw_hero();
    printf("请选择您要执行功能\n");
    printf("1、查看技能\n");
    printf("2、查看编号\n");
    printf("---按任意键返回---\n");
    int fun_num = 0;
    scanf("%d", &fun_num);
    // 清除缓冲区
    while (getchar() != '\n')
        ;
    system("clear");
    switch (fun_num)
    {

    case 1:
        printf("查看技能\n");
        show_skill();
        break;
    case 2:
        printf("查看编号\n");
        show_num();
        break;
    default:
        printf("返回上一级\n");
        system_management();
        break;
    }
}

// 抽取英雄
void draw_hero(void)
{
    printf("抽取英雄\n");

    struct personage student1;
    student1.name = "陈子豪";

    struct personage student2;
    student2.name = "许士航";

    struct personage student3;
    student3.name = "谢旭刚";

    struct personage student4;
    student4.name = "夏梦达";

    struct personage student5;
    student5.name = "班磊";

    // struct personage *p[5]={&student1,&student2,&student3,&student4,&student5};

    struct personage person[5] = {student1, student2, student3, student4, student5};

    int i = 0;

    srand((unsigned)time(NULL));

    i = rand() % 5;

    printf("抽到的英雄是%s\n", person[i].name);
    // printf("抽到的同学是%s\n",p[i]->name);
}

// 查看技能
void show_skill(void)
{
    printf("查看技能\n");
    printf("哈撒给\n");
    printf("按任意键继续\n");
    back_main();
}
// 查看编号
void show_num(void)
{
    printf("查看编号\n");
    printf("121\n");
    printf("按任意键继续\n");
    back_main();
}

// 英雄管理界面
void hero_admin(void)
{
    system("clear");
    printf("请选择您要执行功能\n");
    printf("1、增加英雄\n");
    printf("2、删除英雄\n");
    printf("3、修改英雄\n");
    printf("---按任意键返回---\n");

    int fun_num = 0;
    scanf("%d", &fun_num);
    // 清除缓冲区
    while (getchar() != '\n');
    system("clear");
    switch (fun_num)
    {
    case 1:
        printf("增加英雄\n");
        add_hero();
        break;
    case 2:
        printf("删除英雄\n");
        del_hero();
        break;
    case 3:
        printf("修改英雄\n");
        change_hero();
        break;
    default:
        printf("返回上一级\n");
        system_management();
        break;
    }
}
// 添加英雄
void add_hero(void)
{
    system("clear");
    printf("增加英雄\n");
    //模拟我们操作的时间
    sleep(3);
    printf("添加完成\n");

    sleep(1);
    hero_admin();
}
void del_hero(void)
{
    system("clear");
    printf("删除英雄\n");
    //模拟我们操作的时间
    sleep(3);
    printf("删除成功！\n");
    sleep(1);
    hero_admin();
}
void change_hero(void)
{
    system("clear");
    printf("修改英雄\n");
    //模拟我们操作的时间
    sleep(3);
    printf("修改成功\n");
    sleep(1);
    hero_admin();
}

// 展示全部英雄
void show_all_hero(void)
{
    system("clear");
    printf("展示全部英雄名字\n");
    //在你展示完全部的英雄名字之后
    printf("1、按角色定位筛选\n");
    printf("2、查询英雄\n");
    int fun_num = 0;
    scanf("%d", &fun_num);
    // 清除缓冲区
    while (getchar() != '\n');
    system("clear");
    switch (fun_num)
    {
    case 1:
        printf("1、按角色定位筛选\n");
        location_hero();
        break;
    case 2:
        printf("2、查询英雄\n");
        search_hero();
        break;

    default:
        break;
    }
}

void search_hero(void)
{
    printf("修改英雄\n");
    sleep(3);
    printf("查找成功\n");
    hero_admin();
}

void location_hero(void)
{
    printf("请选择您要筛选的角色定位\n");
    printf("1、上路\n");
    printf("2、打野\n");
    printf("3、中路\n");
    printf("4、下路\n");
    printf("5、辅助\n");
    int fun_num = 0;
    scanf("%d", &fun_num);
    // 清除缓冲区
    while (getchar() != '\n');
    system("clear");
    /*编写一个按照1，2，3，4，5 去筛选英雄的函数
    用字符串去当做参数传递
    */
    condition_sieve(fun_num);
}

void condition_sieve(int i)
{
    char arr[5][7]={"上路\0","打野\0","中路\0","下路\0","辅助\0"};

    // while ()
    // {
    //     // if(memcmp(arr[i],英雄的定位,6)==0)
    //     {
    //         printf("英雄信息\n");
    //     }
    // }
    printf("您选择的定位是%s",arr[i-1]);
    printf("---按任意键返回---\n");
    back_two();


}