#include<stdio.h>
int ct = 0;
int count(void)
{
    ct++;
    return ct;
}
int main()
{
    printf("%d\n", count());
    printf("%d\n", count());
    printf("%d\n", count());
    printf("%d\n", count());
    return 0;
}


