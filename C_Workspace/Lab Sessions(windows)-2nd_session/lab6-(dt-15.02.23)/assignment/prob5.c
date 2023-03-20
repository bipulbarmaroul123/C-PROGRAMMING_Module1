#include<stdio.h>
#include<math.h>
int main()
{
    int num, k;
    printf("enter a number:");
    scanf("%d", &num);
    printf("enter power you want to give:");
    scanf("%d", &k);
    printf("\n%d to the power %d is: %f", num, k, pow(num, k));
    return 0;
}
