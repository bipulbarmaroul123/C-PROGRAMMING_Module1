#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    int v = 0, c = 0;
    int *p;
    printf("enter a string:");
    scanf("%s", ch);
    gets(ch);
    printf("string is: %s", ch);
    p = &ch;
    while(*p!='\0')
    {
        if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
        p++;
    }
    printf("\n%d number of vowel present in the given string!", v);
    printf("\n%d number of consonant present in the given string!", c);
	return 0;
}
