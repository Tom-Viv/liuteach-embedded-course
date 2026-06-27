#ifndef __HERO_H__
#define __HERO_H__

#include "include.h"


struct personage
{
    char *name;
    int age;
    int atk;
    float lifebar;
    char *skill;
}personage;


/*-------------抽取英雄-----------*/
// 抽取英雄管理界面菜单
void draw_admin(void);
// 抽取英雄
void draw_hero(void);
// 查看技能
void show_skill(void);
// 查看编号
void show_num(void);

/*-------------管理英雄-----------*/
void hero_admin(void);
//添加英雄
void add_hero(void);
//删除英雄
void del_hero(void);
//修改英雄
void change_hero(void);

/*-------------全部英雄-----------*/
//展开全部英雄
void show_all_hero(void);
//查找英雄
void search_hero(void);
//按角色定位筛选英雄
void location_hero(void);
//按定位查找英雄
void condition_sieve(int i);

#endif 
