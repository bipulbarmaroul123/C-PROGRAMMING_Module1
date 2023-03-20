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
    printf("address of 1:%d\n", &ct);
    printf("%d\n", count());
    printf("address of 2:%d\n", &ct);
    printf("%d\n", count());
    printf("address of 3:%d\n", &ct);
    printf("%d\n", count());
    printf("address of 4:%d\n", &ct);
    return 0;
}
