#include<stdio.h>
int a = 10;
int main()
{
    int a = 20;
    printf("the value of a is:%d\n", a);
    {
        int a = 30;
        printf("the value of a is:%d\n", a);
    }
    printf("the value of a is:%d\n", a);
    return 0;
}
