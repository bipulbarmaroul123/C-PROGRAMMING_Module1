#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c, d;
    printf("enter number of rows you want: ");
    scanf("%d", &c);
    printf("enter number of columns you want: ");
    scanf("%d", &d);

    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            printf("\nenter elements for matrix 1 of index %d %d is:\n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            printf("\nenter elements for matrix 2 of index %d %d is:\n", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            printf("\nthe elements for matrix 1 are: %d\n", a[i][j]);
        }
    }
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            printf("\nthe elements for matrix 2 are: %d\n", b[i][j]);
        }
    }

    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            a[i][j] = b[i][j];
        }
    }

    printf("\nthe copy of element of array b in array a is given below:->\n");
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            printf("\t%d", a[i][j]);
        }
    }
    return 0;
}
