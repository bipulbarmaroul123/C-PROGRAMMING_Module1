#include<stdio.h>
#include<math.h>
float series(int n, int x)
{
    float sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum = sum+1+(1/pow(x, i));
    }
    printf("\nsum of the series is: %.2f", sum);
}
int main()
{
    int n, x;
    printf("enter the number of terms:");
    scanf("%d", &n);
    printf("enter the value of x:");
    scanf("%d", &x);
    series(n, x);
    return 0;
}
