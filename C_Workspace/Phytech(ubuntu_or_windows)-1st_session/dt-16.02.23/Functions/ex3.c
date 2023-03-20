#include <stdio.h>
int a = 10;
int main()
{
    {
        int a = 20;
        printf("\n%d", a);
    }
    {
        int a = 30;
        printf("\n%d", a);
    }
    {
        int a = 40;
        printf("\n%d", a);
    }
    printf("\n%d", a);
    return 0;
}
