#include <stdio.h>

typedef struct __node
{
    char a;
    int b;
}Node;


int main(int argc, char const *argv[])
{
    Node node={'A',1};
    FILE *fp=fopen("test1.bin","ab+");
    if (fp==NULL)
    {
        perror("fopen");
    }
    fwrite(&node,sizeof(node),1,fp);
  
    Node node1;
    fseek(fp,0,SEEK_SET);
    fread(&node1,sizeof(node1),1,fp);

    printf("通过fread读取到的结构体的内容是%c,%d\n",node1.a,node1.b);
    
    return 0;
}
