#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("\nvalue of p:%x", p);
    printf("\nincrement value of p:%x", p++);
    printf("\nvalue of p:%x", p);
    return 0;
}
