#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], substr[50];
    int n,l,i;
    printf("Input the string: ");
    gets(str);
    printf("\nthe actual string is: %s", str);
    printf("\nenter the position to start extraction: ");
    scanf("%d", &n);
    printf("\nthe length of string: ");
    scanf("%d", &l);
    for(i=0; i<=l; i++)
    {
        substr[i] = str[n+i-1];
    }
    substr[i] = '\0';
    printf("\nthe substring retrive from the string is: %s", substr);
    return 0;
}
