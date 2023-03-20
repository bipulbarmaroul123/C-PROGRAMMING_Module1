#include<stdio.h>
struct emp
{
	int i;
	char ch;
        //unsigned char zeros[3];
	double d;
}__attribute__((packed))tep={100, 'a', 20.14};

int main()
{
	char *ptr=(double *)&tep;
	printf("\nvalue of d is: %lf\n", *(double *)(ptr+5));
	printf("\nvalue of c is: %c\n", *(char *)(ptr+4));
	printf("\nvalue of i is: %d\n", *(int *)(ptr+0));
	printf("size of the structure is: %ld\n", sizeof(tep));
	return 0;
} 

