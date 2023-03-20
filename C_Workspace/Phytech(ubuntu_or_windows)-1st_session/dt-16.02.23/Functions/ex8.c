#include<stdio.h>
float flot(float fl)
{
    return fl;
}
int main()
{
    static float fl = 10.5;
    printf("the value is:%.2f\n", flot(fl));
    return 0;
}
