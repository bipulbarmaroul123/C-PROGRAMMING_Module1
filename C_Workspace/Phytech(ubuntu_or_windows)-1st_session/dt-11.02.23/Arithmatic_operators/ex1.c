#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter the value of a and b:\n");
    scanf("%d%d", &a, &b);
    c = a+b;
    printf("addition of two numbers is:%d\n", a+b);
    c = a-b;
    printf("substraction of two numbers is:%d\n", a-b);
    c = a*b;
    printf("multiplication of two numbers is:%d\n", a*b);
    c = a/b;
    printf("division of two numbers is:%d\n", a/b);
    c = a%b;
    printf("modulus of two numbers is:%d\n", a%b);
    return 0;
}
