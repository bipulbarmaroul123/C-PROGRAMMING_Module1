//get the elements of the array through pointer
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *p;
    p = &a;
    for (int i = 0; i < 10; i++)
    {
        printf("\nthe elements are: %d", *(p+i));
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nthe elements are: %d", *(a+i));
    }
    return 0;
}

