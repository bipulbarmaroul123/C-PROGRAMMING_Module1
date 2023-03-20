#include<stdio.h>
int main()
{
    int num, rev = 0, d;
    printf("enter first number:");
    scanf("%d", &num);
    while(num!=0)
    {
        d = num%10;
        rev = (rev*10)+d;
        num = num/10;
    }
    printf("\nreverse of %d is: %d", num, rev);
    return 0;
}
