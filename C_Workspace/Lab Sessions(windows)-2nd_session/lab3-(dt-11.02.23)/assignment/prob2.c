#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    if(a<50 && a<b)
    {
        printf("it returns true!\n");
    }
    else
    {
        printf("it returns false!\n");
    }
    return 0;
}
