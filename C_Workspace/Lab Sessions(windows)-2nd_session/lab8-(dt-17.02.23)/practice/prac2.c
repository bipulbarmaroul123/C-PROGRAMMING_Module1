#include<stdio.h>
int main()
{
    int a = 10, b = 5;
    int res = a>b && b!=10 && b<11 && a>5;
    printf("%d\n", res);
    return 0;
}
