#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *str="hello,teacherliu";
    char arr1[]="hello,teacherliu";
    char arr2[]={'h','e','l','l','o',',','t','e','a','c','h','e','t','l','i','u'};

    printf("str的大小是%zu\n",strlen(str)); //16
    printf("str的大小是%zu\n",sizeof(str)); //8
    
    printf("arr1的大小是%zu\n",strlen(arr1)); //16
    printf("arr1的大小是%zu\n",sizeof(arr1)); //17

    printf("arr2的大小是%zu\n",strlen(arr2)); //32
    printf("arr2的大小是%zu\n",sizeof(arr2)); //16
    return 0;
}
