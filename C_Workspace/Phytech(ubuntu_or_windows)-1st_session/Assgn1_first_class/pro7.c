#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr, *ptr2;
	ptr = (int *)malloc(6*sizeof(int));
	for(int i=0; i<8; i++)
	{
		ptr2 = (int *)malloc(8*sizeof(int));
		printf("enter the value of %d element is:", i);
		scanf("%d", &ptr[i]);
		free(ptr2);
	}
	for(int i=0; i<8; i++)
	{
		printf("the value of %d element is:%d\n", i, ptr[i]);
	}
}

