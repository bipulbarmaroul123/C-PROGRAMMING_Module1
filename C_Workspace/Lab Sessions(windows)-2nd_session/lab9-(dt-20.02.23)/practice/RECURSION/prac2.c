#include <stdio.h>
int sum(int n)
{
    int s = 0;
    if (n == 1)
    {
        return n;
    }
    s = n+sum(n-1);
    return s;
}
int main()
{
    int a;
    a = sum(5);
    printf("%d", a);
    return 0;
}
