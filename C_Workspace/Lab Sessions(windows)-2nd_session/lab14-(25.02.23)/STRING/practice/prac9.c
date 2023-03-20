#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    int c = 0;
    printf("\nenter the string1:");
    gets(str1);
    for (int i = 0; i < str1[i]; i++)
    {
        str2[i] = str1[i];
        c++;
    }
    printf("\nthe first string is: %s", str1);
    printf("\nthe second string is: %s", str2);
    printf("\nnumber characters copied is: %d", c);
    return 0;
}
