#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *line = NULL;
    size_t len = 0;
    size_t read_len;

    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        perror("fopen");
        return -1;
    }
 
    // 动态读取一行，自动分配内存
    read_len = getline(&line, &len, fp);
    if (read_len != -1) {
        printf("读取到%zu个字符: %s", read_len, line);
    }

    free(line);  // 必须手动释放内存
    fclose(fp);
    return 0;
}