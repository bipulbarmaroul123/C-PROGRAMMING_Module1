//type casting
#include<stdio.h>
int main()
{
    int a = 10;
    float b = 20.2;
    char c  = 'a';
    void *p;
    p = &a;
    printf("\nvalue of a is:%d", *(int*)p);
    p = &b;
    printf("\nvalue of b is:%.1f", *(float*)p);
    p = &c;
    printf("\nvalue of c is:%c", *(char*)p);
	return 0;
}
