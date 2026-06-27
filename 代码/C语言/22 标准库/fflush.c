#include <stdio.h>
#include <stdint.h>

int main(void)
{
    FILE *fp = fopen("tsxt2.txt", "a+");

    fprintf(fp, "验证缓冲区的存在");

    fflush(fp);

    do
    {
        fread(&data, sizeof(data), 1, fp);
    } while (!feof(fp));


    fclose(fp);
    return 0;
}