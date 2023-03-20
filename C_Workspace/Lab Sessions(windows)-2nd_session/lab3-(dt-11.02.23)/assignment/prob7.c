#include<stdio.h>
int main()
{
    int num, rev = 0, digit;
    printf("enter any three digit number:");
    scanf("%d", &num);
    while(num>0)
    {
      digit = num%10;
      rev = rev*10 + digit;
      num = num/10;  
    }
    printf("sum of the entered number:%d\n", rev);
    return 0;
}
