#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int dest1[5];

    char brr[]="hello";
    char dest2[6];

    float crr[]={1.1,2.2,3.3,4.4,5.5};
    float dest3[5];

    memcpy(dest1,arr,5*sizeof(int));
    memcpy(dest2,brr,5);
    memcpy(dest3,crr,5*sizeof(float));

    printf("通过memcpy拷贝后的dest1的数据为:");
    for (size_t i = 0; i < 5; i++)
    {
        printf(" %d ",dest1[i]);
    }

    printf("\n通过memcpy拷贝后的dest2的数据为:");

    printf(" %s ",dest2);
    

    printf("\n通过memcpy拷贝后的dest3的数据为:");
    for (size_t i = 0; i < 5; i++)
    {
        printf(" %.2f ",dest3[i]);
    }
    printf("\n");

    
    return 0;
}
