#include<stdio.h>
int main()
{
    int a[10][10], c, d;
    printf("enter number of rows you want: ");
    scanf("%d", &c);
    printf("enter number of columns you want: ");
    scanf("%d", &d);

    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            printf("\nenter elements for matrix a of index %d %d is:\n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\ndiagonal elements are given below-->\n");
    printf("\n");
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            if(i==j)
            {
                printf("\t%d", a[i][j]);
            }
        }
    }
    return 0;
}
