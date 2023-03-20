#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20], char1, char2;
    int l1, l2, flag = 0;
    printf("\nenter the string1:");
    gets(s1);
    printf("\nenter the string2:");
    gets(s2);
    l1 = strlen(s1);
    l2 = strlen(s2);
    printf("\nstring1 is: %s", s1);
    printf("\nstring2 is: %s", s2);
    for (int i = 0; i < l1; i++)
    {
        char1 = s1[i];
        char2 = s2[i];
        if (char1 != char2)
        {
            printf("\ntwo strings are not equal");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\ntwo strings are equal");
    }
    return 0;
}
