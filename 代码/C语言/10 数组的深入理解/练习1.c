#include <stdio.h>

// 编写程序，打入月份号，输出该月的英文月名。例如，输入“3”，则输出“March”，要求用指针数组处理。
// int main(int argc, char const *argv[])
// {
//     const char * months[] = {
//         "Error", "January", "February", "March", "April", "May", "June",
//         "July", "August", "September", "October", "November", "December"
//     };

//     //提示用户，输入数字
//     //scan获取用户的输入
//     //通过指针的指向去输出
//     int month=0;
//     printf("请输入1-12\n");
//     scanf("%d",&month);
//     printf("输入的月份为%s\n",*(months+month));

//     return 0;
// }

//矩阵的乘法：两个二维数组，做乘法
// int main(int argc, char const *argv[])
// {
    
//     // 定义两个矩阵：A 为 2x3 矩阵，B 为 3x2 矩阵
//     int A[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};
//     int B[3][3] = {{7,8,9},{4, 5, 6},{1, 2, 3}};
//     int C[2][2] = {0}; // 结果矩阵 C 初始化为 0

//     // 三层循环核心算法
//     for (int i = 0; i < 3; i++)
//     { // 行循环：遍历 A 的每一行
//         for (int j = 0; j < 3; j++)
//         { // 列循环：遍历 B 的每一列
//             for (int k = 0; k < 3; k++)
//             { // 游标循环：负责对应元素相乘并累加
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     // 打印结果矩阵 C
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t", C[i][j]); // 使用 \t 制表符对齐
//         }
//         printf("\n"); // 每印完一行换行
//     }

//     return 0;
// }


//求u矩阵的对角线
int main(int argc, char const *argv[])
{
    
    int a[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};  
    int sum1=0;
    int sum2=0;
    //a[0][2]、a[1][1]、a[2][0]
    //a[0][0]、a[1][1]、a[2][2]
    //从左往右的对角线，正对角线
    for (size_t i = 0; i < 3; i++)
    {
        sum1+=a[i][i];
    }
    //从有往左对角线，副对角线
    for (size_t i = 0; i < 3; i++)
    {
        sum2+=a[i][2-i];
    }
    
    return 0;
}
