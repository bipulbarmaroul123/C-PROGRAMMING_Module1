#include<stdio.h>
#include<string.h>
int main()
{

    char s[20], len;
    printf("\nenter a string:");
    gets(s);
    len = strlen(s);
    printf("\nreverse of the entered string is given below\n");
    for(int i=len; i>=0; i--)
    {
        printf(" %c", s[i]);
    }
    return 0;
}

