#include<stdio.h>
int main()
{
    int n;
    printf("\nenter the number of element you want:");
    scanf("%d", &n);
    int a[n], *p;
    p = &a;
    for (int i = 0; i < n; i++)
    {
        printf("\nenter the element-%d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nthe element-%d:%d", i+1, *(p+i));
    }
    return 0;
}


