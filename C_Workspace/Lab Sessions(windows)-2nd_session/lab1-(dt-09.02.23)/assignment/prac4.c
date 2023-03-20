#include<stdio.h>
int main()
{
	float w1, w2, i1, i2;
	float avg;
	printf("enter the weight of item1:\n");
	scanf("%f", &w1);
	printf("enter the number of item1:\n");
	scanf("%f", &i1);
	printf("enter the weight of item2:\n");
    scanf("%f", &w2);
    printf("enter the number of item2:\n");
    scanf("%f", &i2);
	avg = ((w1*i1)+(w2*i2))/(i1+i2);
	printf("average value:%f\n", avg);
	return 0;
}


