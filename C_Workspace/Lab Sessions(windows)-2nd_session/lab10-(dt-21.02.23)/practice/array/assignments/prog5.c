#include<stdio.h>
int main()
{
    int a[20], sum = 0, avg, grt, sml;
    for(int i=0; i<8; i++)
    {
        printf("\nenter element %d:", i+1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    for(int i=0; i<8; i++)
    {
        printf("\nthe element %d of array is:%d", i+1, a[i]);
    }
    
    grt = a[0];
    for(int i=0; i<8; i++)
    {
        if(a[i]>grt)
        {
            grt = a[i];
        }
    }

    sml = a[0];
    for(int i=0; i<8; i++)
    {
        if(a[i]<sml)
        {
            sml = a[i];
        }
    }
    avg = sum/8;
    printf("\nsum of the elements of the given array is:%d", sum);
    printf("\naverage of the elements of the given array is:%d", avg);
    printf("\nthe greatest element present in the arrray is: %d", grt);
    printf("\nthe smallest element present in the arrray is: %d", sml);
    return 0;
}
