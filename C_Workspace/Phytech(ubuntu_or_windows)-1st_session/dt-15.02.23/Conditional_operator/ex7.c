#include<stdio.h>
int main()
{
    int wed_t, mon = 20, tue = 24;
    printf("enter wednesday temperature:\n");
    scanf("%d", &wed_t);
    if(wed_t==mon)
    {
        printf("todays temperature %d also same with monday temperature\n", wed_t);
    }
    else if(wed_t==tue)
    {
        printf("todays temperature %d also same with tuesday temperature\n", wed_t);
    }
    else
    {
        printf("%d is unpredictable temperature\n", wed_t);
    }
    return 0;
}

