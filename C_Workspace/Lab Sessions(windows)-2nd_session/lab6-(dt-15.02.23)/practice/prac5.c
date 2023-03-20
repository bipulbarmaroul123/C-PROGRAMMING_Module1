#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    if(a>=0)
    {
        printf("%d is positive number!", a);
    }
    else
    {
        printf("%d is negative number!", a);
    }
    return 0;
}
