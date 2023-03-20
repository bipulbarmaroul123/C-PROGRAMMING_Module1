#include<stdio.h>
#include "trigo.h"
int main()
{
	float p, b, h;
	printf("enter the perpendicular of triangle:\n");
	scanf("%f", &p);
        printf("enter the base of triangle:\n");
        scanf("%f", &b);
        printf("enter the height triangle:\n");
        scanf("%f", &h);
        
	printf("the value of sin0 of the triangle is:%f\n", sine(p,h));
	printf("the value of cos0 of the triangle is:%f\n", cose(b,h));
	printf("the value of tan0 of the triangle is:%f\n", tane(p,b));

}



