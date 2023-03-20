#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr = calloc(4, sizeof(int));
	if(ptr == NULL)
	{
		printf("memory is created\n");
	}
	else
	{
		printf("memory is not created\n");
	}
}


