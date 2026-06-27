#include <stdio.h>
#include <stdint.h>

// 紧凑排列结构体，避免字节填充
struct DeviceConfig {
    uint8_t  dev_id;
    uint32_t baudrate;
    uint16_t timeout;
} __attribute__((packed));

int main(void)
{
    struct DeviceConfig cfg = {1, 115200, 5000};
    struct DeviceConfig read_cfg;

    // 写入结构体
    FILE *fp = fopen("cfg.bin", "wb");
    fwrite(&cfg, sizeof(struct DeviceConfig), 1, fp);
    fclose(fp);

    // 读取结构体
    fp = fopen("cfg.bin", "rb");
    fread(&read_cfg, sizeof(struct DeviceConfig), 1, fp);
    printf("设备ID:%d 波特率:%d 超时:%d\n",
           read_cfg.dev_id, read_cfg.baudrate, read_cfg.timeout);
    fclose(fp);
    return 0;
}