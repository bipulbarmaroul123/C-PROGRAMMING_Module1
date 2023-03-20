#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *ptr;
	int n;
	printf("enter the number of floating point data you want:");
	scanf("%d", &n);
	ptr = (float *)malloc(n*sizeof(float));
	for(int i=0; i<n; i++)
	{
		printf("enter the value of %d element:\n", i);
		scanf("%f", &ptr[i]);
	}
	for(int i=0; i<n; i++)
	{
		printf("the value of %d element is:%f\n", i, ptr[i]);
	}
}





