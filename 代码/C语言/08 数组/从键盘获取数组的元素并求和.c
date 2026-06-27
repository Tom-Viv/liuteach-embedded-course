#include <stdio.h>

int main()
{
    int sum=0;
    int arr[5]={0,1,2,3,4};
    for(int i=0;i<5;i++)
    {
      sum=sum+arr[i];
    }
    printf ("所有元素相加的值%d\n",sum);


    scanf("%d",&arr[0]);
    printf ("通过scanf输入元素的值为%d\n",sum);
    return 0;
}