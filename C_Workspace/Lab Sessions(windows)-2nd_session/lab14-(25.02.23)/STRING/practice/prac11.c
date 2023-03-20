#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int len, max = 0;
    printf("\nenter the string:");
    gets(str);
    len = strlen(str);
    int freq[256] = {0};
    for(int i=0; i<len; i++)
    {
        freq[str[i]]++;
    }
    for(int i=0; i<256; i++)
    {
        if(freq[i]>freq[max])
        {
            max = i;
        }
    }
    printf("\nthe highest frequency of character is %c and it appears %d times in the string: %s", max, freq[max], str);
    return 0;
}
