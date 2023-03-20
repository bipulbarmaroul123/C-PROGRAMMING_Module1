#include<stdio.h>
int main()
{
    float n1, n2;
    printf("enter a number:\n");
    scanf("%f", &n1);
    printf("enter another number:\n");
    scanf("%f", &n2);
    printf("the two number n1 and n2 before swapping is: %.2f and %.2f\n", n1, n2);
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    printf("the two number n1 and n2 after swapping is: %.2f and %.2f\n", n1, n2);
    return 0;
}

