#include <stdio.h>
int main()
{
    int arr[10], temp;
    for (int i = 0; i < 7; i++)
    {
        printf("enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nbefore sorting from ascending to descending order the elements are-->\n");
    for (int i = 0; i < 7; i++)
    {
        printf("the element %d is: %d\n", i + 1, arr[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7 - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nafter sorting from ascending to descending order the elements are-->\n");
    for (int i = 0; i < 7; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}
