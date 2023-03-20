#include<stdio.h>
#include<math.h>
float power(int x, int y, int z)
{
    int a;
    float b;
    a = y+z;
    b = pow(x, a);
    return b;
}
int main()
{
    int x, y, z, a;
    printf("enter the value of x:");
    scanf("%d", &x);
    printf("enter the value of y:");
    scanf("%d", &y);
    printf("enter the value of z:");
    scanf("%d", &z);
    printf("to the power %d is:%f", x, power(x, y, z));
    return 0;
}
