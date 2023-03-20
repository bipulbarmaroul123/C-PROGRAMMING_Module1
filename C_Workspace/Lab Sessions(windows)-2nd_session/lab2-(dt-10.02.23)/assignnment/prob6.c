#include<stdio.h>
int main()
{
    int n1, n2;
    float res;
    printf("enter a number:\n");
    scanf("%d", &n1);
    printf("enter another number:\n");
    scanf("%d", &n2);
    res = n1/n2;
    if(n1>n2)
    {
        printf("%.2f\n", res);
    }
    else{
        printf("division not possible\n");
    }
    return 0;
}

