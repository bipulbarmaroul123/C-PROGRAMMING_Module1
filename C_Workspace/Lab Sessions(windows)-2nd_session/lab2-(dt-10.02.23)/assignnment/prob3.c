#include<stdio.h>
int main()
{
    int dis, fuel;
    float avg;
    printf("input total distance in km:\n");
    scanf("%d", &dis);
    printf("input total fuel spent in liters:\n");
    scanf("%d", &fuel);
    avg = dis/fuel;
    printf("average consumption (km/lit): %.2f\n", avg);
    return 0;

}
