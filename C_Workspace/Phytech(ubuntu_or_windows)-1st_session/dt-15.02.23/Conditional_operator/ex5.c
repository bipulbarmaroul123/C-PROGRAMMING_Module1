#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a and b:\n");
    scanf("%d %d", &a,&b);
    printf("%d\n", a>b);
    printf("%d\n", a<b);
    printf("%d\n", a>=b);
    printf("%d\n", a<=b);
    printf("%d\n", a!=b);
    return 0;
}
