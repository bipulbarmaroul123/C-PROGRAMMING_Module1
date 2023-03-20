#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("enter a positive number:");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("it is a negative number!");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    printf("factorial of %d is:%d", n, fact);
    return 0;
}
