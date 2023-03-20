#include<stdio.h>
struct emp
{
	int i;
	double d;
	char ch;
	unsigned int reserved[3];
}tep={100, 'a', 20.14};

int main()
{
	printf("size of the structure is: %ld\n", sizeof(tep));
	printf("address of the structre is: %p\n", &tep);
	printf("value of i, d, ch is: %d\n%lf\n%c\n", tep.i, tep.d, tep.ch);
	printf("address of the i, d, ch are: %p\n%p\n%p", &tep.i, &tep.d, &tep.ch);
	return 0;
} 

