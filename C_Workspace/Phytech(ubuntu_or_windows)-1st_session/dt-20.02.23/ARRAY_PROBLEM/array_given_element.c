#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 55};
    for(int i=0; i<10; i++)
    {
        printf("\nelement %d is:", i+1);
        printf("\t%d", arr[i]);
    }
    return 0;
}
