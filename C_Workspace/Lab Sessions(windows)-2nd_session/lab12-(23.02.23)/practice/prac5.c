#include<stdio.h>
int swap(int *a, int *b, int *c)
{
    *a = *a+*b+*c;
    *b = *a-(*b+*c);
    *c = *a-(*b+*c);
    *a = *a-(*b+*c);
}
int main()
{
    int a = 5, b = 6, c = 7;
    printf("\nbefore call by reference the value of a and b and c is:%d and %d and %d", a, b, c);
    swap(&a, &b, &c);
    printf("\nafter call by reference the value of a and b and c is:%d and %d and %d", a, b, c);
	return 0;
}

