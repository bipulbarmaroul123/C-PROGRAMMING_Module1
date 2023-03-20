#include <stdio.h>
int main()
{
    int arr[10], n, temp;
    int *ptr = &arr;
    printf("enter how many elemnts you want: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nbefore sorting the elements are-->\n");
    for (int i = 0; i < n; i++)
    {
        printf("the element %d is: %d\n", i + 1, *(ptr+i));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(ptr+j) < *(ptr+i))
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    printf("\nafter sorting the element wil be-->\n");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", *(ptr+i));
    }
    return 0;
}
