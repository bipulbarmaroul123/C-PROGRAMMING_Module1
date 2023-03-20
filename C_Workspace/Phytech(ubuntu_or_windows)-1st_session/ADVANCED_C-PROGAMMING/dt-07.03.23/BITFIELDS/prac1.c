#include<stdio.h>
struct xyz
{
	int a;
	char c;
	double d;
}temp = {100, 'a', 20.14};
int main()
{
	printf("size of the structure is: %ld\n", sizeof(temp));
	printf("value of a, c, d are:%d\n%c\n%.2f", temp.a, temp.c, temp.d);
	return 0;
}

