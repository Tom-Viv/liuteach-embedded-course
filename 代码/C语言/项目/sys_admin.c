#include "include.h"
// 英雄管理系统主界面
void system_management(void)
{
    system("clear");
    printf("请选择您要执行功能\n");
    printf("1、抽取英雄\n");
    printf("2、英雄管理\n");
    printf("3、全部英雄\n");
    int fun_num = 0;
    scanf("%d", &fun_num);
    while (getchar() != '\n')
        ;
    system("clear");
    switch (fun_num)
    {
    case 1:
        printf("抽取英雄界面\n");
        draw_admin();
        break;
    case 2:
        printf("英雄管理界面\n");
        hero_admin();
        break;
    case 3:
        printf("查看全部英雄\n");
        show_all_hero();
        break;
    default:
        printf("保持当前界面\n");
        system_management();
        break;
    }
}
// 等待用户输入
void wait_user(void)
{
    int num = 0;
    scanf("%d", &num);
    while (getchar() != '\n')
        ;
}
// 返回主菜单-->英雄管理系统主界面
void back_main(void)
{
    wait_user();
    system_management();
}
// 返回子菜单-->英雄管理界面
void back_hero_admin(void)
{
    wait_user();
    draw_admin();
}
// 返回子菜单-->展开全部英雄界面
void back_two(void)
{
    wait_user();
    draw_admin();
}
