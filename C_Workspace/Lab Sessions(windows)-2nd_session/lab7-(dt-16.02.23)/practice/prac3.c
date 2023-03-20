#include<stdio.h>
int cube(int a)
{
    return a*a*a;
}
int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("cube of %d is:%d", a, cube(a));
    return 0;
}



