#include<stdio.h>
int main()
{
	int h, m, s, sec = 23500;
	h = sec/3600;
	m = (sec-(h*3600))/60;
	s = (sec-(3600*h)-(m*60));
	printf("H:M:S - %d:%d:%d", h, m, s);
	return 0;
}


