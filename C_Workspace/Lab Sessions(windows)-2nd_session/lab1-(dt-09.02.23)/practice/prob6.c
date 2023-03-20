#include<stdio.h>
#include<math.h>
int main()
{
	int x1, x2, y1, y2;
	float d;
	printf("enter value of x1:\n");
    scanf("%d", &x1);
    printf("enter value of x2:\n");
    scanf("%d", &x2);
    printf("enter value of y1:\n");
    scanf("%d", &y1);
	printf("enter value of y2:\n");
    scanf("%d", &y2);
	d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("the distance between 2 points is:%f\n", d);
	return 0;
}

	
