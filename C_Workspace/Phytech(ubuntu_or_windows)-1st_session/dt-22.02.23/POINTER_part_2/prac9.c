//sum of elements using command arguments
#include<stdio.h>
int main(int argc, char * argv[])
{
    int i, n, sum = 0;
    for(i=1; i<argc; i++)
    {
        sscanf(argv[i], "%d", &n);
        sum+=n;
    }
    printf("sum of the numbers is:%d", sum);
    printf("\n%s", argv[0]);
    for(i=1; i<argc; i++)
    {
        printf("\n%s", argv[i]);
    }
    return 0;
}
