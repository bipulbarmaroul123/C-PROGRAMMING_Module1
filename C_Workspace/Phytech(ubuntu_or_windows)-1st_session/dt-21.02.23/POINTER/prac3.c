//swap 2 numbers using call by reference using third variable
#include<stdio.h>
int swap(int *a, int *b, int *temp)
{
    *temp = *a;
    *a = *b;
    *b = *temp;
}
int main()
{
    int a = 1, b = 2, temp;
    printf("\nbefore call by reference the value of a and b is:%d and %d", a, b);
    swap(&a, &b, &temp);
    printf("\nafter call by reference the value of a and b is:%d and %d", a, b);
	return 0;
}
