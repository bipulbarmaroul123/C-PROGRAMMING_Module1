// find milage of a car using enum to get perticular state
#include <stdio.h>
int main()
{
    int ch;
    enum
    {
        maruti = 800,
        xuv = 900,
        bmw = 700,
        nano = 600
    };
    printf("\n CAR MODELS\n");
    printf("0.MARUTI\n");
    printf("1.XUV\n");
    printf("2.BMW\n");
    printf("3.NANO\n");
    printf("\nenter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 0:
        printf("\nmilage of maruti is: %d", maruti);
        break;

    case 1:
        printf("\nmilage of xuv is: %d", xuv);
        break;

    case 2:
        printf("\nmilage of bmw is: %d", bmw);
        break;

    case 3:
        printf("\nmilage of nano is: %d", nano);
        break;

    default:
        printf("\nenter a valid number!");
        break;
    }
    
}
