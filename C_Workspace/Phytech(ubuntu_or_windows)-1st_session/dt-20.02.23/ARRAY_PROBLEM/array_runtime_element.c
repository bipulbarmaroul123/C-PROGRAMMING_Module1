#include<stdio.h>
int main()
{
    int arr[10], n;
    printf("enter how many elements you want: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("enter element %d:\n", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("the element %d is: %d\n", i+1, arr[i]);
    }
    return 0;
}
