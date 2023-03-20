#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    float x1, x2, r, i;
    printf("enter the value of a and b and c:\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        x1 = (-b + (sqrt((b * b) - (4 * a * c)))) / (2 * a);
        x2 = (-b - (sqrt((b * b) - (4 * a * c)))) / (2 * a);
        printf("root 1 of an equation is %f\n", x1);
        printf("root 2 of an equation is %f\n", x2);
    }
    else if (d == 0)
    {
        x1 = x2 = -b / (2 * a);

        printf("root 1 of an equation is %f\n", x1);
        printf("root 2 of an equation is %f\n", x2);
    }
    else
    {
        r = -b / (2 * a);
        i = sqrt(-d) / (2 * a);
        printf("Root1 of an equation is=%.2f+%.2fi\tRoot2 of an equation is=%.2f+%.2fi", r, i, r, i);
    }
    return 0;
}
