#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a:\n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("%d is even number\n", a);
    }
    else
    {
        printf("%d is odd number\n", a);
    }
    return 0;
}
