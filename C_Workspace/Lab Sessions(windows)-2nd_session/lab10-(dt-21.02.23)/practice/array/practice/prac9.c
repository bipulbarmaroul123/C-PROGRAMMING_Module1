#include<stdio.h>
int main()
{
    static int  a[] = {10, 11, 12, 15, 23};
    printf("%u, %u\n", a, &a[3]);
    return 0;
}
