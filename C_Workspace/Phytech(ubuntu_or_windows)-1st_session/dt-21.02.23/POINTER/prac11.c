#include<stdio.h>
int main()
{
    int a = 10;
    float b = 2.5;
    char c = 'b';
    int *p = &a;
    printf("\nvalue of p:%x", p);
    printf("\naddress of p:%x", &p);
    printf("\nvalue of p++:%x", p++);
    printf("\nvalue of p:%x", p);
    printf("\nvalue of p--:%x", p--);
    printf("\nvalue of p:%x", p);
    printf("\nsize of p:%d", sizeof(*p));

    printf("\n\n");
    float *q = &b;
    printf("\nvalue of q:%x", q);
    printf("\naddress of q:%x", &q);
    printf("\nvalue of q++:%x", q++);
    printf("\nvalue of q:%x", q);
    printf("\nvalue of q--:%x", q--);
    printf("\nvalue of q:%x", q);
    printf("\nsize of q:%d", sizeof(*q));
    
    printf("\n\n");
    char *r = &c;
    printf("\nvalue of r:%x", r);
    printf("\naddress of r:%x", &r);
    printf("\nvalue of r++:%x", r++);
    printf("\nvalue of r:%x", r);
    printf("\nvalue of r--:%x", r--);
    printf("\nvalue of r:%x", r);
    printf("\nsize of r:%d", sizeof(*r));
    return 0;
}
