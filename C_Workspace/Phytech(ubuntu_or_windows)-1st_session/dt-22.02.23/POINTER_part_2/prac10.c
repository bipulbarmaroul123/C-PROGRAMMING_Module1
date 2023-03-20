//arithmatic operations using command arguments
#include <stdio.h>
int main(int argc, char *argv[])
{
    int i, n, sum = 0, sub = 5, prod = 1, div = 1, mod = 2;
    char s[5];
    sscanf(argv[1], "%[^\n]%c", s);
    if (argv[1] = "-s")
    {
        for (i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &n);
            sum += n;
        }
        printf("\nsum of the numbers is:%d", sum);
    }
    printf("\n\n");
    if (argv[1] = "-b")
    {
        for (i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &n);
            sub -= n;
        }
        printf("\nsubstraction of the numbers is:%d", sub);
    }
    printf("\n\n");
    if (argv[1] = "-p")
    {
        for (i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &n);
            prod *= n;
        }
        printf("\nmultiplication of the numbers is:%d", prod);
    }

    printf("\n\n");
    if (argv[1] = "-d")
    {
        for (i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &n);
            div =  n/div;
        }
        printf("\ndivision of the numbers is:%d", div);
    }

    printf("\n\n");
    if (argv[1] = "-m")
    {
        for (i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &n);
            mod =  n/mod;
        }
        printf("\ndivision of the numbers is:%d", div);
    }
    return 0;
}

