#include<stdio.h>
int main()
{
    int num, count = 0, d;
    printf("enter a number:");
    scanf("%d", &num);
    while(num!=0)
    {
        d = num%10;
        count = count+1;
        num = num/10;
    }
    printf("\nthe number of digits present in the number is: %d", count);
    return 0;
}
