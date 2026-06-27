#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp=fopen("test.bin","a+");
    if (fp==NULL)
    {
        perror("fopen");
    }
    int arr[5]={10,20,30,40,50};

    fwrite(arr,4,5,fp);

    fseek(fp,0,SEEK_SET);

    int brr[5];

    fread(brr,4,5,fp);

    for (size_t i = 0; i < 5; i++)
    {
        printf("通过fread读到的内容是%d\n",brr[i]);
    }


    fclose(fp);
    return 0;
}
