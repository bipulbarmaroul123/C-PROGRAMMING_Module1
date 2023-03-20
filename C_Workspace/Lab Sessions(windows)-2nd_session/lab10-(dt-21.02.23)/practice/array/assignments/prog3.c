#include <stdio.h>
int main()
{
    int a[20], sum = 0, sum1 = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("\nenter element %d:", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\nthe element %d of array is:%d", i + 1, a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
        else if (a[i] % 2 != 0)
        {
            sum1 = sum1 + a[i];
        }
        else
        {
            printf("all numbers.");
        }
    }
    printf("\nsum of all even numbers in the arrray is:%d", sum);
    printf("\nsum of all odd numbers in the array is:%d", sum1);
    return 0;
}
