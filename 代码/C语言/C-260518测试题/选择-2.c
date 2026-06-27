#include <stdio.h>
int change(void)
{

}

/*
1、int (*p)[3];       第一部分：(*p); 第二部分：int   [3]
2、int *p[3];         第一部分：p[3]; 第二部分：int *
3、struct Stu *p；    
4、int (*p)(int);     第一部分：*p; 第二部分：int   (int)
5、int *p(int);       第一部分：p;  第二部分：int *  (int)
6、int (*p[3])(int);  第一部分：*p[3] 第二部分：int  (int)
*/

int arr[3];
int *p=arr;

int *p;char *p;
int main() 
{
    int (*p)(void);


}