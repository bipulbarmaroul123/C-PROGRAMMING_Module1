#include<stdio.h>
int main()
{
	int i;
	unsigned char us;
    signed char sc;
    unsigned int ui;
    signed int gi;
	short int si;
	float f;
	double d;
	char c;
	long int li;
	printf("size of int:%zu\n", sizeof(i));
	printf("size of float:%zu\n", sizeof(f));
	printf("size of char:%zu\n", sizeof(c));
    printf("size of double:%zu\n", sizeof(d));
	printf("size of long int:%zu\n", sizeof(li));
	printf("size of shortint:%zu\n", sizeof(si));
	printf("size of unsigned int:%zu\n", sizeof(ui));
	printf("size of signed int:%zu\n", sizeof(gi));
	printf("size of unsigned char:%zu\n", sizeof(us));
	printf("size of signed char:%zu\n", sizeof(sc));
	return 0;
}

