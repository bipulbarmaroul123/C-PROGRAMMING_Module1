#include<stdio.h>
int main()
{
    int num[5], sum = 0;
    printf("enter 1st number:\n");
    scanf("%d", &num[0]);
    printf("enter 2nd number:\n");
    scanf("%d", &num[1]);
    printf("enter 3rd number:\n");
    scanf("%d", &num[2]);
    printf("enter 4th number:\n");
    scanf("%d", &num[3]);
    printf("enter 5th number:\n");
    scanf("%d", &num[4]);
    for(int i=0; i<5; i++)
    {
        if(num[i]%2!=0)
        {
            sum = sum + num[i];

        }
    }
    printf("sum of all odd values are: %d\n", sum);
    return 0;
}
