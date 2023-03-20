#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int alph = 0, digit = 0, splch = 0;
    printf("\nenter the string:");
    gets(str);
    for(int i=0; i<str[i]; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i] <= 'Z'))
        {
            alph++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }
    }
    printf("\nnumber of alphabate present in the string is: %d", alph);
    printf("\nnumber of digits present in the string is: %d", digit);
    printf("\nnumber of special character present in the string is: %d", splch);
    return 0;
}
