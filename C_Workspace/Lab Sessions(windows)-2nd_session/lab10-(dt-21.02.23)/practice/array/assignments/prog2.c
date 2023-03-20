#include<stdio.h>
int main()
{
    int a[20], sum = 0, sum1 = 0;
    for(int i=0; i<10; i++)
    {
        printf("\nenter element %d:", i+1);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<5; i++)
    {
        sum = sum+a[i];
    }
    for(int i=5; i<10; i++)
    {
        sum1 = sum1+a[i];
    }
    if(sum == sum1)
    {
        printf("\nit is same");
    }
    else
    {
        printf("\nit is not same");
    }
    return 0;
}
