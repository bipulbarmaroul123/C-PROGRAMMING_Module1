#include<stdio.h>
int a = 10;
int main()
{
    int a, b = 3, c = 4;
    a = b+(c*=4);
    printf("the value of c is:%d\n", c);
    printf("the value of a is:%d\n", a);
    printf("the value of b is:%d\n", b);
    return 0;
}
