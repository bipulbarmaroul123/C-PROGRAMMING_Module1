#include<stdio.h>
int series(int a)
{
    int f = 1, num = 0;
    while(num<=a-1)
    {
        f =f+f*num;
        num++;
    }
    return f;
    
}
int main()
{
    int sum;
    printf("\nsum of series:1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5");
    sum = series(1)/1+series(2)/2+series(3)/3+series(4)/4+series(5)/5;
    printf("\nsum of series is: %d", sum);
    return 0;
}

