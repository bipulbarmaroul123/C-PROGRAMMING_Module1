#include <stdio.h>
int main()
{

    int i, b;
    printf("Input a integer number:\n");

    scanf("%d", &b);

    if ((b % 2 == 0) && b > 0)
    {
        printf("Number is positive-even\n");
    }
    else if ((b % 2 == 0) && b < 0)
    {
        printf("Number is negative-even'\n");
    }
    else if ((b % 2 != 0) && b > 0)
    {
        printf("Number is positive-odd\n");
    }
    else if ((b % 2 != 0) && b < 0)
    {
        printf("Number is negative-odd\n");
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}
