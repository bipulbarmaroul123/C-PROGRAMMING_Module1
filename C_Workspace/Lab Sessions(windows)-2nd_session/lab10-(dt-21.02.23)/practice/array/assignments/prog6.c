#include<stdio.h>
int main()
{
    int a[20], grt, sml, n;
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
    
    grt = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>grt)
        {
            grt = a[i];
        }
    }

    sml = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]<sml)
        {
            sml = a[i];
        }
    }
    printf("\nthe greatest element present in the arrray is: %d", grt);
    printf("\nthe smallest element present in the arrray is: %d", sml);
    return 0;
}
