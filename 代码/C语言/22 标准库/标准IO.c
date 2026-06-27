#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fp=fopen("test.txt","a+");
    if (fp==NULL)
    {
        perror("fopen");
        return -1;
    }
    else
    {
        printf("打开文件成功！\n");
    }

    int i=fputs("2026/06/18系统启动成功\n",fp);
    if (i==EOF)
    {
        perror("fputs");
        return -1;
    }
    else
    {
        printf("文件写入成功！\n");
    }
    char arr[256];
    char *p=NULL;
    rewind(fp);

    p=fgets(arr,sizeof(arr),fp);
    if (p==NULL)
    {
        perror("fgets");
    }
        else
    {
        printf("通过fgets读取到的数据为%s\n",arr);
    }

    char *ptr=NULL;
    size_t len=0;
    size_t arr_len=0;
    arr_len=getline(&ptr,&len,fp);
    if (arr_len>0)
    {
        printf("成功读取%ld个字符,内容是%s\n",arr_len,ptr);
    }
    else
    {
        perror("getline");
    }
    
    int a=fputc('X',fp);
    if (a>0)
    {
        printf("成功写入的内容是%c\n",a);
    }
    else
    {
        perror("fputc");
    }

    fseek(fp,-1,SEEK_END);
    int b=fgetc(fp);
    if (b>0)
    {
        printf("成功读取的内容是%c\n",b);
    }
    else
    {
        perror("fgetc");
    }
    fprintf(stdout,"成功写入的内容是%c,成功读取的内容是%c",a,b);

    fseek(fp,-7,SEEK_END);
    char brr[256];
    fread(brr,3,3,fp);
    
    printf("fread读取到的内容是%s\n",brr);

    int crr[5]={10,20,30,40,50};

    fwrite(crr,4,5,fp);

    fclose(fp);
    return 0;
}
