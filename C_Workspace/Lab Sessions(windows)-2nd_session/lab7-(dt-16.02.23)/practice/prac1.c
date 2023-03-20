#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int quo(int a, int b)
{
    return a/b;
}
int main()
{
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    printf("sum of the 2 numbers:%d\n", sum(10, 5));
    printf("substraction of the 2 numbers:%d\n", sub(10, 5));
    printf("multiplication of the 2 numbers:%d\n", mul(10, 5));
    printf("division of the 2 numbers:%d\n", quo(10, 5));
    return 0;
}
