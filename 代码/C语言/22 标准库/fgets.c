#include <stdio.h>

int main(void)
{
    char buf[1024];
    FILE *fp = fopen("test.txt", "a+");
    if (fp == NULL)
    {
        perror("fopen");
        return -1;
    }

    // 读取一行内容
    if (fgets(buf, sizeof(buf), fp) != NULL)
    {
        printf("读取到一行: %s", buf);
    }

    fputc("刘", fp);
    // fputc('i', fp);

    perror("fputc");
 
    rewind(fp); 

    int ch = fgetc(fp);
    if (ch != EOF)
    {
        printf("%c", ch);
    }

    int id = 1001;
    float temp = 36.5;
    // 格式化写入日志
    fprintf(fp, "设备ID:%d 当前温度:%.1f\n", id, temp);

    fclose(fp);
    return 0;
}