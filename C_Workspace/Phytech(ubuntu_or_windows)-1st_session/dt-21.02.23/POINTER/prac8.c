//impliment arithmatic operation using pointer function
#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int multi(int a, int b)
{
    return a*b;
}

int divi(int a, int b)
{
    return a/b;
}
int(*func)(int,int);
int main()
{
    int result;
    func = &sum;
    result = (*func)(20, 10);
    printf("\nsum of a and b is:%d", result);
    func = &sub;
    result = (*func)(20, 10);
    printf("\nsubstraction of a and b is:%d", result);
    func = &multi;
    result = (*func)(20, 10);
    printf("\nmultiplication of a and b is:%d", result);
    func = &divi;
    result = (*func)(20, 10);
    printf("\ndivision of a and b is:%d", result);
	return 0;
}


