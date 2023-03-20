#include<stdio.h>
float sip(float p, float t, float r)
{
    float si;
    si = (p*t*r)/100.0;
    return si;
}
int main()
{
    float p, t, r, si, z;
    for(int i=1; i<=3; i++)
    {
        printf("simple interest for set %d", i);
        printf("\n---------------------------\n");
        printf("enter principal amount:");
        scanf("%f", &p);
        printf("enter time period:");
        scanf("%f", &t);
        printf("enter rate of interest:");
        scanf("%f", &r);
        z = sip(p,t,r);
        printf("\nsimple interest for set %d is:%f\n", i, z);
        printf("------------------------------------\n");
    }
    return 0;
}
