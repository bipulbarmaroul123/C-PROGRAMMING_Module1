#include<stdio.h>
int main()
{
    int pin =2001, p;
    printf("enter the atm pin:\n");
    scanf("%d",&p);
    if(p==pin)
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Access denied\n");
    }
    return 0;
}
