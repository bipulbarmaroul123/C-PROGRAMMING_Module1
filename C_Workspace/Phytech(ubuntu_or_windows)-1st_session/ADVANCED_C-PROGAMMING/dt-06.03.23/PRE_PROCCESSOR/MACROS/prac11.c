#include<stdio.h>
#define BIG(x,y)  (x>y)?x:y
int main()
{
	int a, b, c;
	printf("\nenter the value of a, b and c respectively: ");
        scanf("\n%d\n%d\n%d", &a, &b, &c);
	printf("\nbiggest number between three numbers is: %d\n", BIG(BIG(a,b),c));
}

