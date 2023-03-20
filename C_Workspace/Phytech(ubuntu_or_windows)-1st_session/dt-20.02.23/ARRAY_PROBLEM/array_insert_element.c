#include <stdio.h>
int main()
{
    int arr[10], n, ele, p;
    printf("enter how many elemnts you want: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nthe array elements before insertion are-->\n");
    for (int i = 0; i < n; i++)
    {
        printf("the element %d is: %d\n", i + 1, arr[i]);
    }
    printf("\nenter an element you want to add:");
    scanf("%d", &ele);
    printf("\nenter the position you want to add the element:");
    scanf("%d", &p);
    for (int i = n - 1; i >= p - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[p - 1] = ele;
    printf("\nelements are after insertion-->\n");
    for (int i = 0; i <= n; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}
