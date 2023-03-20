//array as an argument pass to the function with operation
#include <stdio.h>
void func(int *p, int n)
{
    int a, b;
    for(int i=0; i<10; i++)
    {
        *(p+i) = ((*p+i)+4) - (*(p+i)+2);
    }
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *p;
    p = &a;
    for (int i = 0; i < 10; i++)
    {
        printf("\nthe elements are: %d", *(p+i));
    }
    func(p, 10);
    printf("\n\n");
    printf("\nAfter given operation");
    for (int i = 0; i < 10; i++)
    {
        printf("\nthe elements are: %d", *(p+i));
    }
    return 0;
}
