//calloc problem
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, n = 2, i;
    p = (int *)calloc(n, sizeof(int));
    printf("\nthe address of the memory is: %x", p);
    printf("\ninitial values\n");
    for(i=0; i<n; i++)
    {
        printf("\n%d", p[i]);
    }
    for(i=0; i<n; i++)
    {
        p[i] = i+1;
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("\n%d", p[i]);
    }
    n = 5;
    p = realloc(p, n*sizeof(int));
    for(i=0; i<n; i++)
    {
        p[i] = i+1;
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("\n%d", p[i]);
    }
    return 0;
}
