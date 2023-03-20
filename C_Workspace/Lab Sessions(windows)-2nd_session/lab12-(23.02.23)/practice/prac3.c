#include<stdio.h>
int main()
{
    int a = 5, b = 6, temp;
    int *p = &a;
    int *q = &b;
    if((*p)>(*q))
    {
        temp = *p;
    }
    else
    {
        temp = *q;
    }
    printf("%d is the greatest", temp);
    return 0;
}

