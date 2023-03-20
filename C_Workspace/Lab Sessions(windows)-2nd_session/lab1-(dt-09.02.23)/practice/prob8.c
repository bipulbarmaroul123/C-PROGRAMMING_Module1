#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, x1, x2;
        printf("enter the first number:\n");
        scanf("%f", &a);
        printf("enter the second number:\n");    
        scanf("%f", &b);
        printf("enter the third number:\n");    
        scanf("%f", &c);
        x1 = (-b+sqrt((b*b)-4*a*c))/(2*a);
        x2 = (-b-sqrt((b*b)-4*a*c))/(2*a);	
	printf("root1 = %f\n", x1);
	printf("root2 = %f\n", x2);
	return 0;
}

