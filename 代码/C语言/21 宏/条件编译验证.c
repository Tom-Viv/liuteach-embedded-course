#include <stdio.h>
//此宏填写1是开启调试，填写2是正常运行，填写3是空闲模式
#define STATUS 2

//此宏填写1是开启指纹，填写2是开启人脸，填写3是开启掌静脉，填写4是开启指静脉，填写5是全部开启，填写6是全部关闭
#define STATUS 2

int main(int argc, char const *argv[])
{
   
#if STATUS==1
    printf("程序进入调试模式\n");

#elif STATUS==2

    printf("程序进入运行模式\n");
#elif STATUS==3

    printf("程序进入空闲模式\n");
    
#endif

    return 0;
}
