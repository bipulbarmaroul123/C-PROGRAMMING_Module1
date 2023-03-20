#include<stdio.h>
int main()
{
	int y, w, d, day = 1329;
	y = day/365;
	w = (day%365)/7;
	d = day-((y*365)+(w*7));
	printf("number of days: %d\n", day);
	printf("years: %d\n", y);
	printf("weeks: %d\n", w);
	printf("days: %d\n", d);
	return 0;
}


