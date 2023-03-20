#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *mem;
	mem = malloc(15*sizeof(char));
	if(mem == NULL)
	{
		printf("could not able to allocate requested memory");
	}
	else
	{
		strcpy(mem, "bipul");
	}
	printf("dynamicaly allocated memory content:%s", mem);
	free(mem);
}

