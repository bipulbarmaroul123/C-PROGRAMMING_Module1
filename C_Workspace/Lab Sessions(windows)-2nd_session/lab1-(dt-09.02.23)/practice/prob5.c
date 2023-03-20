#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("enter the value of number1:\n");
	scanf("%d", &n1);
        printf("enter the value of number2:\n");
        scanf("%d", &n2);
	printf("enter the value of number3:\n");
        scanf("%d", &n3);
	if(n1>=n2 && n1>=n3)
	{
		printf("number1 %d is greater\n", n1);
	}
	else if(n2>=n3 && n2>=n1)
	{
		printf("number2 %d is greater\n", n2);
	}
	else
	{
		printf("number3 %d is greater\n", n3);
	}
	return 0;
}




