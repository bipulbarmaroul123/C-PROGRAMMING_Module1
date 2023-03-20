#include <stdio.h>
int main()
{
    int arr[10], n, temp;
    printf("enter how many elemnts you want: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nbefore binary sorting the elements are-->\n");
    for (int i = 0; i < n; i++)
    {
        printf("the element %d is: %d\n", i + 1, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nafter binary sorting the element wil be-->\n");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}
