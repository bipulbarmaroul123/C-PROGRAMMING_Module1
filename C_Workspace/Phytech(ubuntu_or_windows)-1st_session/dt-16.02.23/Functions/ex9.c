#include<stdio.h>
int inte(int fl)
{
    return fl;
}
int main()
{
    static int fl = 10;
    printf("the value is:%d\n", inte(fl));
    return 0;
}
