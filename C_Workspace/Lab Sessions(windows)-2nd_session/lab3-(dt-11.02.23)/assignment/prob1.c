#include<stdio.h>
int main()
{
    int num;
    float res;
    printf("enter a four digit number:");
    scanf("%d", &num);
    if(num>=1000 && num<=9999)
    {
        res = (((num+8)/3)%5)*5;
        printf("the result will be:%f\n", res);
    }
    else
    {
        printf("invalid enter!");
    }
    return 0;
}
