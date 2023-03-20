#include<stdio.h>
int main()
{
    int n1, n2;
    int qutio, rem;
    printf("enter the value of n1:\n");
    scanf("%d", &n1);
    printf("enter the value of n2:\n");
    scanf("%d", &n2);
    qutio = n1/n2;
    rem = n1%n2;
    printf("the reminder of the two given number is: %d\n", rem);
    printf("the quotient of the two given number is: %d\n", qutio);
    return 0;
}
