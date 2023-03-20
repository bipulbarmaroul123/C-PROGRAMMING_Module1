#include <stdio.h>
int main()
{
    static int a = 10;
    {
        static int a = 20;
        {
            static int a = 30;
            {
                printf("\n%d", a);
            }
            printf("\n%d", a);
        }
        printf("\n%d", a);
    }
}
