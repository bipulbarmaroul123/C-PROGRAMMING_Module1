#include<stdio.h>
int main()
{
	int day = 2535, y, m, d;
	printf("the number of days:%d\n", day);
	y = day/365;
	m = (day%365)/30;
	d = day-(m*30);
	printf("%d years\n", y);
	printf("%d months\n", m);
	printf("%d days\n", d);
	return 0;
}


