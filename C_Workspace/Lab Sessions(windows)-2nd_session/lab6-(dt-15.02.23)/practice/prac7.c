#include<stdio.h>
int main()
{
    char c;
    printf("enter any character:");
    scanf("%c", &c);
    if((c>=65 && c<=90)||(c>=97 && c<=122))
    {
        printf("%c is an alphabate!", c);
    }
    else
    {
        printf("%c is not an alphabate!", c);
    }
    return 0;
}
