#include<stdio.h>
int power(int x, int y, int z)
{
    int a;
    int b = 0;
    a = y+z;
    for(int i = 1; i<=a; i++)
    {
        b = x*i;
    }
    printf("%d^%d = %d", x, a, b);
}
int main()
{
    int x, y, z;
    printf("enter the value of x:");
    scanf("%d", &x);
    printf("enter the value of y:");
    scanf("%d", &y);
    printf("enter the value of z:");
    scanf("%d", &z);
    power(x, y, z);
    return 0;
}
