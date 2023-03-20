#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr, n;
	printf("enter a number:");
	scanf("%d", &n);
	ptr = (int *)malloc(10*sizeof(int));
	for(int i=1; i<=10; i++)
	{
		ptr[i] = n*i;
		printf("%dX%d = %d\n", n, i, ptr[i]);
	}
	printf("\n\n");
	ptr =(int *)realloc(ptr, 15*sizeof(int));
	for(int i=1; i<=15; i++)
	{
		ptr[i] = n*i;
		printf("%dX%d = %d\n", n, i, ptr[i]);
	}

}


