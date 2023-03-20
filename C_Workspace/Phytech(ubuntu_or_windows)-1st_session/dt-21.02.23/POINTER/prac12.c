#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    printf("\nthe value of a is:%d", a);
    printf("\nthe address of a is:%x", &a);
    printf("\nthe value of p is:%x", p);
    printf("\nthe address of p is:%x", &p);
    printf("\nthe value of q is:%x", q);
    printf("\nthe address of q is:%x", &q);
    return 0;
}
