//malloc problem
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, n, i;
    printf("\nenter the number of element you want: ");
    scanf("%d", &n);
    p = (int *)malloc(n*sizeof(int));
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
    return 0;
}
