#include<stdio.h>
int inte(int a)
{
    register int i;
    for(i=1; i<=a; i++)
    {
        printf("%d\n%d", i, &i);
    }
}
int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    inte(a);
}

