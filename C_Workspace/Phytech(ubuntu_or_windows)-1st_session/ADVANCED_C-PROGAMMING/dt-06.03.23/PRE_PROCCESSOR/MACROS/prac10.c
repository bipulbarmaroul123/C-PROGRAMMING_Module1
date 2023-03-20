#include<stdio.h>
#include<string.h>
void check(int);
#define EVEN(n) check(n)
int main()
{
	int n;
	printf("\nenter a number: ");
	scanf("%d", &n);
	EVEN(n);
}
void check(int n)
{
	printf("\n %s\n", (n%2==0)? "it is an even number":"it is an odd number");
}

