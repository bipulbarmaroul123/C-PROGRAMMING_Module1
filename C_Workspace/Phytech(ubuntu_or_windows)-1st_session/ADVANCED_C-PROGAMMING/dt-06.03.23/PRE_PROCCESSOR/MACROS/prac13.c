#include<stdio.h>
#define MAX 10
int main()
{
	printf("\nthe maximum value is: %d\n", MAX);
        #undef MAX
        #define MAX 100
	printf("\nthe maximum value is: %d\n", MAX);
	return 0;
}

