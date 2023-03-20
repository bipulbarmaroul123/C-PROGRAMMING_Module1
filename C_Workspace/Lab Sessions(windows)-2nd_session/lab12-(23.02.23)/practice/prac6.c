#include<stdio.h>
int main()
{
    int num = 5, fact = 1;
    int *p = &num;
    for(int i=0; i<num; i++)
    {
        fact = fact* (*p-i);
    }
    printf("factorial of the given number is:%d", fact);
	return 0;
}
