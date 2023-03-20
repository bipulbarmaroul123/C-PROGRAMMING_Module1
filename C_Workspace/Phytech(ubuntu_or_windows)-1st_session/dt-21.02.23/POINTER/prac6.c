//store value of variable in pointer varibale
#include<stdio.h>
int main()
{
    int a = 10;
    float b = 20;
    char c  = 'a';

    int *ip = &a;
    float *fp = &b;
    char *cp = &c;
    printf("\n%d", *ip);
    printf("\n%f", *fp);
    printf("\n%c", *cp);

	return 0;
}
