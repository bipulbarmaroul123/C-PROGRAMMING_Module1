#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter string: ");
    gets(str);
    printf("String is: %s",str);
    printf("\nconvert the string to Upper case is: %s",strupr(str));
    printf("\nconvert the string to lower case is: %s",strlwr(str));
    return 0;
}


