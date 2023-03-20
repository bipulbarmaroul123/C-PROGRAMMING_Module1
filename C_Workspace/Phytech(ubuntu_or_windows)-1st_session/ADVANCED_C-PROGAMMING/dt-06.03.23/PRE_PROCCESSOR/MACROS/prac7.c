#include<stdio.h>
#define ODD
int main()
{
#if defined EVEN 
	int a = 10, b = 20;
#elif defined ODD
	int a = 20, b = 10;
#else
	int a = 0, b = 0;
#endif
	printf("the addition of a and b is: %d", a+b);
	return 0;
}

