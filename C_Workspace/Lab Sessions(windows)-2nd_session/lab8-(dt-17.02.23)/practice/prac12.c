#include<stdio.h>
int main()
{
    int a = 8, b;
    b = a++, ++a;
    printf("%d\n%d", a, b);
    return 0;
}