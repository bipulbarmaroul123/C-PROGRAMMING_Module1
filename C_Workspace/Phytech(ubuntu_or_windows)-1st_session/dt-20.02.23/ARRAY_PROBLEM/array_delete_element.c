#include <stdio.h>
int main()
{
    int arr[10], n, ele;
    printf("enter how many elemnts you want: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nthe array elements before deletion are-->\n");
    for (int i = 0; i < n; i++)
    {
        printf("the element %d is: %d\n", i + 1, arr[i]);
    }
    printf("\nenter an element you want to delete:");
    scanf("%d", &ele);
    for (int i = 0; i < n; i++)
    {
        if (ele == arr[i])
        {
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
        }
    }
    printf("\nelements are after deletion-->\n");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}
