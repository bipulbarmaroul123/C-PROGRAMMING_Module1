#include<stdio.h>
struct xyz
{
	int a;
	double d;
	char c;
}__attribute__((packed))temp={100, 'a', 20.14};

int main()
{
	printf("size of the structure is: %ld\n", sizeof(temp));
	printf("address of the structure: %p\n", &temp);
	//printf("the value of a, d, c are: %d\n%c\n%.2f\n", temp.a, temp.c, temp.d);
	printf("%p\n%p\n%p", &temp.a, &temp.d, &temp.c);
	return 0;
} 

