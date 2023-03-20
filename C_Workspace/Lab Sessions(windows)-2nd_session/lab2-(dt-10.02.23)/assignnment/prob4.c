#include<stdio.h>
int main()
{
    int n1, n2;
    printf("enter a number:\n");
    scanf("%d", &n1);
    printf("enter another number:\n");
    scanf("%d", &n2);
    if(n1%n2==0)
    {
        printf("multipled!");
    }
    else{
        printf("they are not multiplied\n");
    }
    return 0;
}
