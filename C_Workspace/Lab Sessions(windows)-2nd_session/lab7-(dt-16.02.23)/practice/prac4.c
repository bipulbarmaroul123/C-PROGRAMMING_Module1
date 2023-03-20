#include<stdio.h>
int cube(void)
{
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    return a*a*a;
}
int main()
{
    printf("cube of given number is:%d", cube());
    return 0;
}
