#include<stdio.h>
int main()
{
    int n1;
    printf("enter the value of n1:\n");
    scanf("%d", &n1);
    if(n1>=0)
    {
        printf("%d is a positive number\n", n1);
    }
    else
    {
        printf("%d is a negeitive number\n", n1);
    }
    return 0;
}
