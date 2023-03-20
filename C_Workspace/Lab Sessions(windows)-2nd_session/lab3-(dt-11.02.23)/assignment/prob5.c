#include<stdio.h>
int main()
{
    int num, d1, d2, d3, d4, d5, res;
    printf("enter any five digit number\n:");
    scanf("%d", &num); 
    if(num>=10000 && num<=99999)
    {
        d1 = num/10000;
        d2 = (num%10000)/1000;
        d3 = ((num%10000)%1000)/100;
        d4 = (((num%10000)%1000)%100)/10;
        d5 = ((((num%10000)%1000)%100)%10)/1;
    }
    else
    {
        printf("invalid number!\n");
    }
    res = d1+d4;
    printf("sum of first digit and second last digit of the given number is:%d", res);
    return 0;
}

