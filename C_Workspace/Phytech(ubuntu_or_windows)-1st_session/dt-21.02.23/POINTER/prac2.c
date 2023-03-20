//addition of two numbers by using call by reference in pointer
#include<stdio.h>
int sum(int *a, int *b)
{
    return *a+*b;
}
int main()
{
    int a = 10, b = 20;
    printf("\nthe value a and b is:%d and %d", a, b);
    printf("\nsum of a and b is:%d", sum(&a, &b));
	return 0;
}
