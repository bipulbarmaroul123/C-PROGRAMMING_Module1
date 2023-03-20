#include<stdio.h>
int main()
{
    int a[20], sum = 0;
    for(int i=0; i<10; i++)
    {
        printf("\nenter element %d:", i+1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    for(int i=0; i<10; i++)
    {
        printf("\nthe element %d of array is:%d", i+1, a[i]);
    }
    printf("\nsum of the elements of the given array is:%d", sum);
    return 0;
}
