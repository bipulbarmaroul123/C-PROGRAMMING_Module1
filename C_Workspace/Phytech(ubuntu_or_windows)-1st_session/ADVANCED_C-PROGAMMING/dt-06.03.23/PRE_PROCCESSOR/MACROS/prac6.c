#include<stdio.h>
#define MAX 20
#define MIN 10
int main()
{
#if MAX
  #ifdef MIN
     #if(MAX>0 && MIN>0)
	printf("\nit is a positive number.");
     #else
	printf("\n it is a negetive number.");
     #endif
  #else
	printf("\nERROR: MIN is not defined!");
  #endif
#else
	printf("\nERROR: MAX is not defined!");
#endif
	return 0;
}

