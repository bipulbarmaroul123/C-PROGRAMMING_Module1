#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    if((*p) % sizeof(a) == 0)
    {
        printf("\nallign memory space");
    }
    else
    {
        printf("\nnot allign memory space");
    }
    return 0;
}
