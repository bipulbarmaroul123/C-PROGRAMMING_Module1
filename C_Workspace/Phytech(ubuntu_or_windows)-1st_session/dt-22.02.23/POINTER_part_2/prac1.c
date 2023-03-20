//size of the pointer datatype
#include<stdio.h>
int main()
{
    int a = 10;
    float b = 2.5;
    char c = 'b';
    double d = 23.5;
    int *p, *q, *r, *s;
    p = &a;
    printf("\nsize of integer pointer p:%d", sizeof(*p));
    q = &b;
    printf("\nsize of float pointer q:%d", sizeof(*q));
    r = &c;
    printf("\nsize of character pointer c:%d", sizeof(*r));
    s = &d;
    printf("\nsize of double pointer d:%d", sizeof(*s));
    return 0;
}
