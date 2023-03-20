#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], substr[50];
    int c1 = 0, c2 = 0, i, j, flag;
    printf("Input the string: ");
    gets(str);
    printf("\nenter the sub string: ");
    gets(substr);
    while(str[c1]!= '\0')
    {
        c1++;
    }
    while(substr[c2]!= '\0')
    {
        c2++;
    }
    for(i=0; i<=c1-c2; i++)
    {
        for(j=i; j<=i+c2; j++)
        {
            flag = 1;
            if(str[j] != substr[j-i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        break;
    }
    if(flag == 1)
    {
        printf("the sub string is not present in the string!");
    }
    else
    {
        printf("the sub string is present in the string!");
    }
    return 0;
}
