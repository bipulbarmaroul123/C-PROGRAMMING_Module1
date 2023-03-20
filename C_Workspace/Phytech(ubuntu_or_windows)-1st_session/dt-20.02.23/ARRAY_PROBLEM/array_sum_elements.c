#include<stdio.h>
int main()
{
    int arr[10], n, sum = 0;
    printf("enter how many elements you want: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("enter element %d:\n", i+1);
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }
    for(int i=0; i<n; i++)
    {
        printf("the element %d is: %d\n", i+1, arr[i]);
    }
    printf("sum of the total elements of the given array is:%d", sum);
    return 0;
}
