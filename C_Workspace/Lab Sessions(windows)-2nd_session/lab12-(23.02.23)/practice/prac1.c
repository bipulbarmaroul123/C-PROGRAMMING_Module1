#include<stdio.h>
int main()
{
    int a = 5, b = 6;
    int *p = &a;
    int *q = &b;
    printf("sum of the two numbers:%d", *p+*q);
    return 0;
}

