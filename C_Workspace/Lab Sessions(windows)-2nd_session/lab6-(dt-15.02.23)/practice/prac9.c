#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    printf("--------multiplication table of %d--------------\n", n);
    for(int i = 1; i<=10; i++)
    {
        printf("%dX%d = %d\n",n, i, n*i);
    }
    return 0;
}
