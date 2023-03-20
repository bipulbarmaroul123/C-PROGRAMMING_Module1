#include<stdio.h>
int count(void)
{
    int ct = 0;
    ct++;
    return ct;
}
int main()
{
    int ct;
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
