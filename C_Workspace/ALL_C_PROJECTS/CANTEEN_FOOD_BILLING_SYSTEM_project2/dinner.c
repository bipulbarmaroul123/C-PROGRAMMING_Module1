#include<stdio.h>
#include<string.h>

int dinner(int total)
{
    int amount, c;
    char n[10];
    main:
    printf("You are inside the DINNER section!!!\n");
    printf("\nEnter your name: ");
    scanf("%s", &n);
    printf("\n---------HERE ARE THE ITEMS LIST WITH PRICE--------\n");
    printf("\n1. ROTI -----> (10rs.)\n2. DAL ------>(10rs.)\n3. CURRY ------> (30rs.)\n4. MILK ------> (15rs.)");
    printf("\n");
    printf("\nChoose your dish: ");
    scanf("%d", &c);
    printf("\nEnter your amount you want: ");
    scanf("%d", &amount);
    switch(c)
    {
        case 1:
        printf("you have choosen ROTI.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nROTI per piece RS.10");
        total = amount*10;
        printf("\nYour total cost of %d piece ROTI is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;
        
        case 2:
        printf("you have choosen DAL.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nDAL per plate RS.10");
        total = amount*10;
        printf("\nYour total cost of %d plate DAL is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 3:
        printf("you have choosen CURRY.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nCURRY per plate RS.30");
        total = amount*30;
        printf("\nYour total cost of %d plate CURRY is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 4:
        printf("you have choosen MILK.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nMILK per glass RS.15");
        total = amount*15;
        printf("\nYour total cost of %d glass MILK is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}
