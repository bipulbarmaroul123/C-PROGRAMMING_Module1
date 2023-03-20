#include<stdio.h>
int main()
{
    int num, sum = 0, digit;
    printf("enter any three digit number:");
    scanf("%d", &num);
    while(num>0)
    {
      digit = num%10;
      sum = sum + digit;
      num = num/10;  
    }
    printf("sum of the entered number:%d\n", sum);
    return 0;
}
