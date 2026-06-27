#include <stdio.h>

// 1.自行编写代码尝试定义一个整型数组，并对他进行初始化，完成以下操作：
// - 输出数组中所有元素相加的值
// - 尝试从键盘获取每一个元素的值并输出所有元素累加值
// int main(int argc, char const *argv[])
// {
//     int arr[5]={1, 2, 3, 4, 5};
//     int sum=0;
//     for (int i=0;i<5;i++)
//     {
//         sum=sum+arr[i];
//     }
//     printf("初始化的数组各元素累加的和为%d\n",sum);
//     sum=0;
//     printf("请输入数组的元素\n");
//     for (int i=0;i<5;i++)
//     {
//         scanf("%d",&arr[i]);
//         sum=sum+arr[i];
//     }
//     printf("用户输入的数组各元素累加的和为%d\n",sum);
//     return 0;
// }

// 2.自行编写代码尝试定义一个整型二维数组，并对他进行初始化，完成以下操作【使用二维数组实现】：
// - 输出数组中所有元素相加的值
// - 尝试从键盘获取每一个元素的值并输出所有元素累加值
// int main(int argc, char const *argv[])
// {
//     int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int sum = 0;
//     for (size_t i = 0; i < 2; i++)
//     {
//         for (size_t j = 0; j < 3; j++)
//         {
//             sum = sum + arr1[i][j];
//         }
//     }
//     printf("初始化的二维数组各元素累加的和为%d\n", sum);
//     sum = 0;
//     printf("请输入二维数组的元素\n");
//     for (size_t i = 0; i < 2; i++)
//     {
//         for (size_t j = 0; j < 3; j++)
//         {
//             scanf("%d",&arr1[i][j]);
//             sum = sum + arr1[i][j];
//         }
//     }
//     printf("用户输入的二维数组各元素累加的和为%d\n", sum);
//     return 0;
// }

// 3.定义一个字符数组存放字符串"hello world"，统计字符串中小写字母的个数
//  int main(int argc, char const *argv[])
//  {
//      char arr[]="hello world";
//      int count=0;
//      for (size_t i = 0; i < sizeof(arr); i++)
//      {
//          if (arr[i]>'a'&arr[i]<'z')
//          {
//              count++;
//          }
//      }
//      printf("当前字符串的小写字母个数为%d\n",count);
//      return 0;
//  }

// 4.有一个已经排好序的数组，现在向该数组插入一个数，要求原来的排序趋势（升序或者降序）不变。
//  int main(int argc, char const *argv[])
//  {
//      int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
//      int a=0;
//      printf("初始化排好序的数组为:");
//      for (size_t i = 0; i < 10; i++)
//      {
//          printf("%d ",arr[i]);
//      }
//      printf("\n");
//      printf("请输入数字：\n");
//      scanf("%d",&a);
//      for (size_t i = 0; i < 10; i++)
//      {
//          if (a<arr[i])
//          {
//              for (size_t j = 9; j > i; j--)
//              {
//                  arr[j]=arr[j-1];
//              }
//              arr[i]=a;
//              break;
//          }
//      }
//      printf("插入元素并排好序的数组为：");
//      for (size_t i = 0; i < 10; i++)
//      {
//          printf("%d ",arr[i]);
//      }
//      printf("\n");
//      return 0;
//  }

// 5. 将一个数组中的值按逆序重新存放。如原来顺序为：8、6、5、4、1.要改为：1、4、5、6、8
//  int main(int argc, char const *argv[])
//  {
//      int arr[] = {8, 6, 5, 4, 1};
//      int sum=0;
//      printf("初始化排好序的数组为:");
//      for (size_t i = 0; i < (sizeof(arr)/sizeof(int)); i++)
//      {
//          printf("%d ",arr[i]);
//      }
//      printf("\n");
//      for (size_t i = 0; i < (sizeof(arr)/sizeof(int))/2; i++)
//      {
//          sum=arr[i];
//          arr[i]=arr[(sizeof(arr)/sizeof(int))-1-i];
//          arr[(sizeof(arr)/sizeof(int))-1-i]=sum;
//      }
//      printf("  逆序排好序的数组为:");
//      for (size_t i = 0; i < (sizeof(arr)/sizeof(int)); i++)
//      {
//          printf("%d ",arr[i]);
//      }
//      printf("\n");
//      return 0;
//  }
//

// 6. 去除一个有序数组中重复元素。如 1 1 1 2 3 3 4 4 5 去重后为 1 2 3 4 5
// int main(int argc, char const *argv[])
// {
//     int arr[] = {1, 1, 1, 2, 3, 3, 4, 4, 5};
//     printf("最开始的数组为:");
//     for (size_t i = 0; i < (sizeof(arr) / sizeof(int)); i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     int j = 0;
//     for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
//     {
//         if (arr[j] != arr[i])
//         {
//             j++;
//             arr[j] = arr[i];
//         }
//     }
//     printf("去重后的数组为:");
//     for (size_t i = 0; i <= j; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }



sadfsdhjksdsadhaksjhdjksjkladsjhdfjkssdfsfasdasaasdas