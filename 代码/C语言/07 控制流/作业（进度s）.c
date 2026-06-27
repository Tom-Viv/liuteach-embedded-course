#include <stdio.h>

// 1、验证while循环
//  int main()
//  {
//      int a = 10;
//      int b = 5;
//      while (a > b)
//      {
//          printf("a=%d, b=%d\n", a, b);
//          a--;
//      }
//      printf("此时是第12行，a=%d, b=%d\n", a, b);
//      return 0;
//  }

// 2、验证if判断
// int main()
// {
//     int a = 10;
//     int b = 5;
//     if (a < b)
//     {
//         printf("结果为真\n");
//     }
//     else
//     {
//         printf("结果为假\n");
//     }
//     return 0;
// }

// 3、输出大小写字母
// int main()
// {
//     char a= 65;  
//     int i = 26;
//     printf("当前字母是: ");
//     while(i > 0)
//     {
//         printf(" %c ", a);
//         a++;   
//         i--;
//     }
//     printf("\n"); 
//     a = 97;  
//     i = 26;
//     printf("当前字母是: ");
//     while(i > 0)
//     {
//         printf(" %c ", a);
//         a++;
//         i--;
//     }
//     printf("\n"); 
//     return 0;
// }

//4、验证while循环
// int main()
// {
//     int i = 0; 
//     int sum = 0;  
//     while (i <= 10)
//     {
//         sum = sum + i; 
//         i++;
//     }
//     printf("1到10的值是%d\n", sum);
//     return 0;
// }