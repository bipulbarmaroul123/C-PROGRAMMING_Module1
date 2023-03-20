#include<stdio.h>
int main()
{
    int a[10], sum = 0;
    int *p = &a;
    for(int i=0; i<5; i++)
    {
        printf("\nenter element-%d:", i+1);
        scanf("%d", &a[i]);
        sum = sum + *(p+i);
    }
    for(int i=0; i<5; i++)
    {
        printf("\nelement-%d: %d", i+1, *(p+i));
    }
    printf("\nsum of the elements is:%d", sum);
    return 0;
}
