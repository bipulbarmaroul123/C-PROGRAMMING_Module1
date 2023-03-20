#include<stdio.h>
int main()
{
    int a[20], n;
    printf("enter the number of elements you want:");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("\nenter element %d:", i+1);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("\nthe element %d of array is:%d", i+1, a[i]);
    }
    printf("\nreverse of the given array is given below-->\n");
    for(int i=n-1; i>=0; i--)
    {
        printf("\nthe element %d of array is:%d", n-i, a[i]);
    }
    return 0;
}
