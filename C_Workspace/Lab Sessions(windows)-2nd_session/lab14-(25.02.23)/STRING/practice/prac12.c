#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], temp;
    printf("Input the string: ");
    gets(str);
    printf("\nbefore ascending order sorting the string is: %s", str);
    int a = strlen(str);

    for (int i = 1; i < a; i++)
        for (int j = 0; j < a - i; j++)
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
    printf("\nAfter ascending order sorting the string is: %s", str);
    return 0;
}
