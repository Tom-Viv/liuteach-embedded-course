#include <stdio.h>

// //矩阵的乘法
// int main()
// {
//     // 定义两个矩阵：A 为 2x3 矩阵，B 为 3x2 矩阵
//     int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int B[3][2] = {{1, 2}, {3, 4}, {5, 6}};
//     int C[2][2] = {0}; // 结果矩阵 C 初始化为 0

    // // 三层循环核心算法
    // for (int i = 0; i < 2; i++)
    // { // 行循环：遍历 A 的每一行
    //     for (int j = 0; j < 2; j++)
    //     { // 列循环：遍历 B 的每一列
    //         for (int k = 0; k < 3; k++)
    //         { // 游标循环：负责对应元素相乘并累加
    //             C[i][j] += A[i][k] * B[k][j];
    //         }
    //     }
    // }

//     // 打印结果矩阵 C
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d\t", C[i][j]); // 使用 \t 制表符对齐
//         }
//         printf("\n"); // 每印完一行换行
//     }
//     return 0;
// }

// //求一个3x3矩阵对角线元素之和
// int main() {
//     // 初始化一个 3x3 的矩阵
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int main_sum = 0; // 主对角线之和 (\ 方向)
//     int vice_sum = 0; // 副对角线之和 (/ 方向)

//     for (int i = 0; i < 3; i++) {
//         main_sum += matrix[i][i];       // 主对角线：行下标等于列下标
//         vice_sum += matrix[i][2 - i];   // 副对角线：列下标为 2 - 行下标
//     }

//     printf("主对角线之和: %d\n", main_sum);
//     printf("副对角线之和: %d\n", vice_sum);

//     return 0;
// }

// // 在屏幕上打印出七阶杨辉三角
// #include <stdio.h>

// int main()
// {
//     int yh[7][7] = {0}; // 定义 7x7 的二维数组并清零

//     for (int i = 0; i < 7; i++)
//     {
//         yh[i][0] = 1; // 每一行的开头第一列都是 1
//         yh[i][i] = 1; // 每一行的最后一列（对角线位置）也是 1

//         // 计算中间位置的数字（从第三行，即 i=2 开始起作用）
//         for (int j = 1; j < i; j++)
//         {
//             yh[i][j] = yh[i - 1][j - 1] + yh[i - 1][j];
//         }
//     }

//     // 打印杨辉三角
//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         { // 注意：每行只打印到 j == i 即可
//             printf("%d\t", yh[i][j]);
//         }
//         printf("\n"); // 换行
//     }
//     return 0;
// }

// //三维数组与指针
// #include <stdio.h>

// int main() {
//     char a[4][3][2] = {
//         {{'a','b'}, {'c', 'd'}, {'e' , 'f'}},
//         {{'g','h'}, {'i', 'j'}, {'k' , 'l'}},
//         {{'m','n'}, {'o', 'p'}, {'q' , 'r'}}, // 'r' 在这里
//         {{'s','t'}, {'u', 'v'}, {'w' , 'x'}},
//     };

//     char (*pa)[2] = &a[0][0];
//     char (*ppa)[3][2] = &a[0];

//     printf("通过 pa 访问 'r': %c\n", pa[8][1]);
//     printf("通过 ppa 访问 'r': %c\n", ppa[2][2][1]);

//     return 0;
// }

// //输入月份号，输出英文月名（要求用指针数组处理）
// int main() {
//     // 1. 定义一个指针数组，里面存储了 13 个字符串常量的地址
//     const char *months[] = {
//         "Error", "January", "February", "March", "April", "May", "June",
//         "July", "August", "September", "October", "November", "December"
//     };

//     int month_num;
//     printf("请输入月份号 (1-12): ");
//     scanf("%d", &month_num); // 接收用户输入的数字

//     // 2. 检查输入的合法性
//     if (month_num >= 1 && month_num <= 12) {
//         // 3. 用指针数组直接通过下标输出对应的字符串
//         printf("该月的英文月名为: %s\n", months[month_num]);
//     } else {
//         printf("输入错误！请输入 1 到 12 之间的数字。\n");
//     }

//     return 0;
// }
