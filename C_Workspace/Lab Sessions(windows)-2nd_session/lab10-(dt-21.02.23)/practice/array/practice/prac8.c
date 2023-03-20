#include<stdio.h>
int main()
{
    static int  a[] = {7, 8, 9};
    printf("%d", 2[a] + a[2]);
    return 0;
}
