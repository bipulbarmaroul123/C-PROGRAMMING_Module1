//impliment arithmatic operation using call by reference in pointer
#include<stdio.h>
int sum(int *a, int *b, int *add)
{
    *add= *a + *b;
    return *add;
}

int sub(int *a, int *b, int *subs)
{
    *subs= *a - *b;
    return *subs;
}

int multi(int *a, int *b, int *mul)
{
    *mul= *a * *b;
    return *mul;
}

int divi(int *a, int *b, int *div)
{
    *div= *a / *b;
    return *div;
}

int main()
{
    int a = 20, b = 10, add, subs, mul, div;
    printf("\nthe value of a and b is:%d and %d", a, b);
    printf("\nsum of a and b is:%d", sum(&a, &b, &add));
    printf("\nsubstraction of a and b is:%d", sub(&a, &b, &subs));
    printf("\nmultiplication of a and b is:%d", multi(&a, &b, &mul));
    printf("\ndivision of a and b is:%d", divi(&a, &b, &div));
	return 0;
}

