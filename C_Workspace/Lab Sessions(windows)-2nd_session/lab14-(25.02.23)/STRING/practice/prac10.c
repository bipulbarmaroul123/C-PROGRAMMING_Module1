#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int v = 0,c = 0;
    printf("\nenter the string:");
    gets(str);
    for(int i=0; i<str[i]; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("\nnumber of vowel present in the string is: %d", v);
    printf("\nnumber of consonant present in the string is: %d", c);
    return 0;
}
