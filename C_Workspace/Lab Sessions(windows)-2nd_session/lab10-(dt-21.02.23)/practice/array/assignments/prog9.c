#include <stdio.h>
int main()
{
    int arr[10], n, count = 0, ele;
    printf("enter how many elemnts you want: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the element %d is: %d\n", i + 1, arr[i]);
    }
    printf("\nenter an element you want to count:");
    scanf("%d", &ele);
    for (int i = 0; i < n; i++)
    {
        if(ele==arr[i])
        {
            count++;
        }
    }
    printf("the number of %d present in the array is: %d", ele, count);
    return 0;
}
