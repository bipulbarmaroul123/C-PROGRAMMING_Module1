#include<stdio.h>
int main()
{
    int a = 10, b = 6;
    int res = a>b && a++;
    printf("%d\n", res);
    printf("%d\n", a);
    return 0;
}
