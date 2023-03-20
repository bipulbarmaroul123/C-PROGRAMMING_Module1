#include <stdio.h>
int main()
{
    int a[20];
    for (int i = 0; i < 5; i++)
    {
        printf("\nenter element %d:", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nthe element %d of array is:%d", i + 1, a[i]);
    }
    printf("\nthe odd numbers present in the array are given below-->\n");
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("\t%d ", a[i]);
        }
    }
    return 0;
}
