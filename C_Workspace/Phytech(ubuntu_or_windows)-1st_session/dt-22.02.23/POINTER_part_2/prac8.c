#include<stdio.h>
int main(int argc, char * argv[])
{
    int i, n, sum = 0;
    for(i=0; i<argc; i++)
    {
        sscanf(argv[i], "%d", &n);
        sum+=n;
    }
    printf("sum of the numbers is:%d", sum);
    return 0;
}
