//increment the value of a variable using pointer (call by reference)
#include<stdio.h>
float count(float *c)
{
    ++*c;
}
int main()
{
    float f = 10.2;
    printf("\nbefore call by reference the value of f is:%.2f", f);
    count(&f);
    count(&f);
    printf("\nafter call by reference the value of f is:%.2f", f);
	return 0;
}

