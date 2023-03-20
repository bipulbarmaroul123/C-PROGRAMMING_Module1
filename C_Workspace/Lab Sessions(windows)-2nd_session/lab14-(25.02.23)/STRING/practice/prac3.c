#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int count = 0;
    printf("\nenter a string:");
    gets(s);
    for(int i=0; i<s[i]; i++)
    {
        count++;
    }
    printf("\nthe string you entered is: %s", s);
    printf("\nthe total length of the string is:%d", count);
    return 0;
}
