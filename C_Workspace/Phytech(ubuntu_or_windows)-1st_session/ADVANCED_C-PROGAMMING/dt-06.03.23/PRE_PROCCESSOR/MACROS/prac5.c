#include<stdio.h>
//#define POSITIVE
#define NEGETIVE
int main()
{
#ifdef POSITIVE
	int a = 10, b = 20;
#endif
#ifdef NEGETIVE
	int a = -10, b = -20;
#endif
	printf("\nthe value of a and b is: %d %d", a, b);
	printf("\nthe addition of two number is: %d", a+b);
	return 0;
}

