#include<stdio.h>
int main()
{
    int a, b, c;
    a = (b=10,c=30);
    printf("a = %d\n", a);//last value of variable will be consider for a(comma operator rule)
    return 0;
}
