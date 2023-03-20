#include<stdio.h>
int main()
{
    int n1;
    printf("enter the value of n1:\n");
    scanf("%d", &n1);
    if(n1%2==0)
    {
        printf("the given number %d is a even number\n", n1);
    }
    else{
        printf("the given number %d is not a even number\n", n1);
    }
    return 0;
}
