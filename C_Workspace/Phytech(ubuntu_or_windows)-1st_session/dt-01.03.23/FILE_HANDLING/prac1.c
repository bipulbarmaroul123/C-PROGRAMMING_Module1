#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[30];
    FILE *fp;
    printf("\nenter new file name: ");
    scanf("%[^\n]", name);
    fp = fopen(name, "w");
    if(fp==NULL)
    {
        printf("\nfail to create a file\n");
        exit(1);
    }
    printf("\nfile created successfully\n");
    return 0;
}
