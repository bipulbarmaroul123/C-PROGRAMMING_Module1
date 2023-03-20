#include<stdio.h>
int dec(int a)
{
    int j;
    for(int i=7; i>=0; i--)
    {
        j = (a>>i) & 1;
        printf(" \n%d", j);
    }
}
int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("\n--Binary form of given number--");
    dec(a);
    return 0;
}
