#include <stdio.h>

// 题目1：定义整型数组并初始化，输出所有元素相加的值；从键盘获取每个元素的值并输出累加值
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int sum1 = 0;

    for (int i = 0; i < 5; i++)
    {
        sum1 += arr1[i];
    }
    printf("初始化数组元素和：%d\n\n", sum1);

    int arr2[5];
    int sum2 = 0;

    printf("请输入5个整数，用空格分隔：");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
        sum2 += arr2[i];
    }
    printf("键盘输入数组元素和：%d\n\n", sum2);

    return 0;
}

//题目2：定义整型二维数组并初始化，输出所有元素相加的值；从键盘获取每个元素的值并输出累加值
int main()
{
    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int sum1 = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum1 += arr1[i][j];
        }
    }
    printf("初始化二维数组元素和：%d\n\n", sum1);

    int arr2[2][3];
    int sum2 = 0;

    printf("请输入2行3列的整数，每行3个，用空格分隔：\n");
    for (int i = 0; i < 2; i++)
    {
        printf("第%d行：", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
            sum2 += arr2[i][j];
        }
    }
    printf("键盘输入二维数组元素和：%d\n\n", sum2);

    return 0;
}

//题目3：定义字符数组存放字符串 "hello world"，统计字符串中小写字母的个数
#include <stdio.h>

    int main()
{
    char str[] = "hello world";
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count++;
        }
    }

    printf("字符串\"%s\"中小写字母的个数：%d\n\n", str, count);
    return 0;
}

//题目4：向已排好序的数组插入一个数，保持原来的排序趋势不变
int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int len = 9;
    int num;
    int pos = 0;

    printf("原升序数组：");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n请输入要插入的整数：");
    scanf("%d", &num);

    while (pos < len && arr[pos] < num)
    {
        pos++;
    }

    for (int i = len; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = num;
    len++;

    printf("插入后的数组：");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}

//题目5：将一个数组中的值按逆序重新存放
int main()
{
    int arr[] = {8, 6, 5, 4, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("原数组：");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < len / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }

    printf("\n逆序后的数组：");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}

//题目6：去除一个有序数组中重复元素
int main()
{
    int arr[] = {1, 1, 1, 2, 3, 3, 4, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("原有序数组：");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    int k = 0;
    for (int i = 1; i < len; i++)
    {
        if (arr[i] != arr[k])
        {
            k++;
            arr[k] = arr[i];
        }
    }
    int new_len = k + 1;

    printf("\n去重后的数组：");
    for (int i = 0; i < new_len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}

//题目7：用折半查找法查找降序数组中的某个数，输出其位置或提示无此数
int main()
{
    int arr[] = {99, 88, 77, 66, 55, 44, 33, 22, 11, 10, 9, 8, 7, 6, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int target;
    int left = 0, right = len - 1;
    int found = 0;

    printf("降序数组：");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n请输入要查找的整数：");
    scanf("%d", &target);

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            printf("找到%d，是数组中第%d个元素（从1开始计数）\n\n", target, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] > target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (!found)
    {
        printf("无此数\n\n");
    }

    return 0;
}

//题目8：实现数组的选择排序、冒泡排序、计数排序
void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void bubbleSort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }
}

void countingSort(int arr[], int len)
{
    int max = arr[0], min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    int range = max - min + 1;

    int count[range];
    for (int i = 0; i < range; i++)
        count[i] = 0;
    for (int i = 0; i < len; i++)
    {
        count[arr[i] - min]++;
    }

    int index = 0;
    for (int i = 0; i < range; i++)
    {
        while (count[i] > 0)
        {
            arr[index++] = i + min;
            count[i]--;
        }
    }
}

int main()
{
    int arr1[] = {5, 2, 9, 1, 5, 6};
    int arr2[] = {5, 2, 9, 1, 5, 6};
    int arr3[] = {5, 2, 9, 1, 5, 6};
    int len = sizeof(arr1) / sizeof(arr1[0]);

    printf("原数组：");
    printArray(arr1, len);

    selectionSort(arr1, len);
    printf("选择排序后：");
    printArray(arr1, len);

    bubbleSort(arr2, len);
    printf("冒泡排序后：");
    printArray(arr2, len);

    countingSort(arr3, len);
    printf("计数排序后：");
    printArray(arr3, len);

    return 0;
}
