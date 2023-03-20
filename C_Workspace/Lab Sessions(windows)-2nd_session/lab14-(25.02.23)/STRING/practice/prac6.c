#include<stdio.h>
#include<string.h>
int main()
{
    char s[20], count;
    printf("\nenter a string:");
    gets(s);
    for(int i=0; i<=s[i]; i++)
    {
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        {
            count++;
        }
    }
    printf("\ntotal number of words in the string is:%d", count+1);
    return 0;
}
