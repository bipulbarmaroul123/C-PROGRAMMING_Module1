#include <stdio.h>
#include "menu.h"
int main()
{
    int x, z, total;
main:
    printf("\n***************WELCOME TO THE SLICE CANTEEN*****************\n");
    printf("\nCanteen food section below--->");
    printf("\n1. BREAKFAST\n2. LUNCH\n3. SNACKS\n4. DINNER\n");
    printf("\nChoose from above option: ");
    scanf("%d", &z);
    switch (z)
    {
    case 1:
        breakfast(total);
        break;
    case 2:
        lunch(total);
        break;
    case 3:
        snacks(total);
        break;
    case 4:
        dinner(total);
        break;
    default:
        printf("\nEnter a valid option!\n");
        goto main;
    }
    char ch;
    printf("\n");
    printf("\nDo you want continue to order then Press 'y' for YES or 'n' for NO: ");
    scanf("%s", &ch);
    if (ch == 'y')
    {
        goto main;
    }
    else
    {
        printf("\n********------------THANKS FOR VISITING SIR!!----------*******");
    }
    return 0;
}
