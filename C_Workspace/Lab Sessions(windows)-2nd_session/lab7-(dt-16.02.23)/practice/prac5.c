#include<stdio.h>
int sum()
{
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    return a+b;
}
int sub()
{
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    return a-b;
}
int mul()
{
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    return a*b;
}
int quo()
{
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    return a/b;
}
int main()
{
    printf("sum of the 2 numbers:%d\n", sum());
    printf("substraction of the 2 numbers:%d\n", sub());
    printf("multiplication of the 2 numbers:%d\n", mul());
    printf("division of the 2 numbers:%d\n", quo());
    return 0;
}
