#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a and b:\n");
    scanf("%d%d", &a, &b);
    printf("two numbers before swapping a is %d and b is %d\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("two numbers after swapping a is:%d and b is %d\n", a, b);
    
    return 0;
}
