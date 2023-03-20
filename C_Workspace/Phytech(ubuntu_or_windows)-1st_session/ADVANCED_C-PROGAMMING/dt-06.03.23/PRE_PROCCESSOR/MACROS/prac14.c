#include<stdio.h>
#include<string.h>
#define CONCATE(s1,s2) (s1 ## s2)
int main()
{
	printf("\nthe organisation name is: %s\n", CONCATE(phytech,embedded));
	return 0;
}

