#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr, n;
	printf("enetr hoe many integers do you want to enter:");
	scanf("%d", &n);
	ptr = (int *)calloc(n, sizeof(int));
	for(int i=0; i<n; i++)
	{
		printf("enter the value of %d element:\n", i);
		scanf("%d", &ptr[i]);
	}
	for(int i=0; i<n; i++)
	{
		printf("the value of %d element is: %d\n", i, ptr[i]);
	}
}

