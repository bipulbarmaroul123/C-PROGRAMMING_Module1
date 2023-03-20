#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a an b:\n");
    scanf("%d\n%d", &a, &b);
    printf("before swapping the value a is %d and b is %d\n", a, b);
    if(a>b)
    {
        a = a+b;
        b = a-b;
        a = a-b;
        printf("after swapping the value a is %d and b is %d\n", a, b);
    }
    else
    {
        printf("the normal value of a is %d and b is %d\n", a, b);
    }
    return 0;
}

