// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a = 0;
//     int b = 0;
//     int c = 10;
//     int d = 10;

//     if (a && (b++))
//     {
//         printf("第一个if成立\n");
//     }
//     if (c || (a++))
//     {
//         printf("第二个if成立\n");
//     }

//     printf("a的值为%d\n", a);
//     printf("b的值为%d\n", b);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a = 1, b = 1;
    if (a && b++)
    {
        printf("a = %d\n", a);
    }
    printf("b = %d\n", b);
    int c = 0, d = 0;
    if (c || ++d)
    {
        printf("c = %d\n", c);
    }
    printf("d = %d\n", d);
    return 0;
}