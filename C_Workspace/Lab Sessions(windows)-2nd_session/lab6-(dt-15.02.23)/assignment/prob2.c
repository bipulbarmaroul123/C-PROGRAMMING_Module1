#include<stdio.h>
int main()
{
    int n1, n2, gcd, lcm, temp1, temp2;
    printf("enter first number:");
    scanf("%d", &n1);
    printf("enter second number:");
    scanf("%d", &n2);
    temp1 = n1;
    temp2 = n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1 = n1-n2;
        }
        else
        {
            n2 = n2-n1;
        }
    }
    gcd = n1;
    lcm = (temp1*temp2)/gcd;
    printf("the gcd of %d and %d is: %d", temp1, temp2, gcd);
    printf("\nthe lcm of %d and %d is: %d", temp1, temp2, lcm);
    return 0;
}
