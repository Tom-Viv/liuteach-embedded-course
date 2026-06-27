#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char arr[]="hello";
    char brr[]="hella";

    int crr[]={1,2,3,4,5};
    int drr[]={1,2,8,4,5};

    float err[]={1.1,2.2,3.3,4.4,5.5};
    float frr[]={1.1,2.2,8.8,4.4,5.5};

    printf("arr和brr相比的结果是%d\n",memcmp(arr,brr,5));

    printf("crr和drr相比的结果是%d\n",memcmp(crr,drr,5*sizeof(int)));
    
    printf("err和frr相比的结果是%d\n",memcmp(err,frr,5*sizeof(float)));
    return 0;
}
