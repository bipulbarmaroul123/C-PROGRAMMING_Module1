#include<stdio.h>
float area(int l, int h)
{
    float a;
    a = l*h;
    return a;
}
float peri(int l, int h)
{
    float p;
    p = 2*(l+h);
    return p;
}
int main()
{
    int l, h;
    printf("enter the length of the rectangle:");
    scanf("%d", &l);
    printf("enter the height of the rectangle:");
    scanf("%d", &h);
    printf("the area of the rectangle is:%.2f", area(l, h));
    printf("\nthe perimeter of the rectangle is:%.2f", peri(l, h));
    return 0;
}

