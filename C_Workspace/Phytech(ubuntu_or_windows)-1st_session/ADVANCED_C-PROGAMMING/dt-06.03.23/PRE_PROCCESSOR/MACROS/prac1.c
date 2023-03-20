#include<stdio.h>
#define PI 3.14
int main()
{
	printf("\nvalue of pi is: %f", PI);
	printf("\nfile name is: %s", __FILE__);
	printf("\ntotal line number of program is: %d", __LINE__);
	printf("\ntoday's date is: %s", __DATE__);
        printf("\nnow time is: %s", __TIME__);
	return 0;
}

