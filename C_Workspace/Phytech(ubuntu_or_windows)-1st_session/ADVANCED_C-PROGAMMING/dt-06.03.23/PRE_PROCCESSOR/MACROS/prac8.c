#include<stdio.h>
#include<string.h>
#define EVEN(n)\
	if(n%2==0)\
        {\
	    printf("\neven number\n");\
        }\
	else\
        {\
	    printf("\nodd number\n");\
        }
int main()
{
	int a = 11;
	EVEN(a)\;
}

