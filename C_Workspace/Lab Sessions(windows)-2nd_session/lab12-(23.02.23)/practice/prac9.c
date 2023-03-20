#include<stdio.h>
int main()
{
    int a[15];
    int *p = &a;
    for(int i=0; i<5; i++)
    {
        printf("\nenter element-%d:", i+1);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("\nelement-%d: %d", i+1, *(p+i));
    }
    printf("\narray in reverse order\n");
    for(int i=5; i>=0; i--)
    {
        printf("\nelement-%d: %d", i+1, *(p+i));
    }
    return 0;
}
