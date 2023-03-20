#include<stdio.h>
struct cal
{
	unsigned int m:4;
	unsigned int d:5;
	unsigned int yr:12;
	unsigned int a;
}__attribute__((packed))dat;

int main()
{
	printf("size of the structure is: %d\n", sizeof(dat));
	printf("size of the a is: %d\n", sizeof(dat.a));
        printf("size of the dat is: %d\n", sizeof(dat.m));
	return 0;
} 

