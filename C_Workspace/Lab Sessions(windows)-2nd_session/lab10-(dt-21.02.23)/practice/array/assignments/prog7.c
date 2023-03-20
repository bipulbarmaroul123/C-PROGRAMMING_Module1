#include <stdio.h>
int main()
{
    int arr[10], n, ele, f, i;
    printf("enter how many elemnts you want: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("the element %d is: %d\n", i + 1, arr[i]);
    }
    printf("\nenter an element you want to search:");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (ele == arr[i])
        {
            f = 1;
            break;
        }
    }
    if(f==1)
    {
        printf("\n%d is found and its position is:%d", ele, i+1);
    }
    else
    {
        printf("your searching element is not found!");
    }
    return 0;
}
