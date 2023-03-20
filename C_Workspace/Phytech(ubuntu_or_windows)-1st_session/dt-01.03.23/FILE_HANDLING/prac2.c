#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[30], ch;
    FILE *fp;
    printf("\nenter new file name: ");
    scanf("%[^\n]", name);
    fp = fopen(name, "w+");
    if(fp==NULL)
    {
        printf("\nfail to create a file\n");
        exit(1);
    }
    printf("\nfile created successfully\n");
    printf("\nenter data into file and press 'ctrl+d' to end\n");
    while((ch=getchar())!=EOF)
    {
        putc(ch, fp);
    }
    fseek(fp,0,SEEK_SET);
    printf("\nDATA IN FILE");
    while((ch=getc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
