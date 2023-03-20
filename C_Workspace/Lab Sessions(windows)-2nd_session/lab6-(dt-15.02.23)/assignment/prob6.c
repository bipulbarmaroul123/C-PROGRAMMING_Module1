#include <stdio.h>
int main()
{
    int num, rev = 0, d, temp;
    printf("enter first number:");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        d = num % 10;
        rev = (rev * 10) + d;
        num = num / 10;
    }
    if (temp == rev)
    {
        printf("\n%d is a pallindrome", temp);
    }
    else
    {
        printf("\n%d is a pallindrome", temp);
    }
    return 0;
}
