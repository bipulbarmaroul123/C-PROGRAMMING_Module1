//swap 2 numbers using call by reference without third variable
#include<stdio.h>
int swap(int *a, int *b)
{
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}
int main()
{
    int a = 1, b = 2;
    printf("\nbefore call by reference the value of a and b is:%d and %d", a, b);
    swap(&a, &b);
    printf("\nafter call by reference the value of a and b is:%d and %d", a, b);
	return 0;
}
