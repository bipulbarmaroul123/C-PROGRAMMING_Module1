#include<stdio.h>
#include<string.h>

int lunch(int total)
{
    int amount, c;
    char n[10];
    main:
    printf("You are inside the LUNCH section!!!\n");
    printf("\nEnter your name: ");
    scanf("%s", &n);
    printf("\n---------HERE ARE THE ITEMS LIST WITH PRICE--------\n");
    printf("\n1. RICE ------> (20rs.)\n2. DAL ------> (10rs.)\n3. MIX CURRY ------> (30rs.)\n4. CHICKEN CURRY ------> (60rs.)\n5. PAMPAD ------> (5rs.)");
    printf("\n");
    printf("\nChoose your dish: ");
    scanf("%d", &c);
    printf("\nEnter your amount you want: ");
    scanf("%d", &amount);
    switch(c)
    {
        case 1:
        printf("you have choosen RICE.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nRICE per plate RS.20");
        total = amount*20;
        printf("\nYour total cost of %d plate RICE is:%d\n", amount, total);
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
        printf("you have choosen MIX CURRY.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nMIX CURRY per plate RS.30");
        total = amount*30;
        printf("\nYour total cost of %d plate MIX CURRY is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 4:
        printf("you have choosen CHICKEN CURRY.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nCHICKEN CUURY per plate RS.60");
        total = amount*60;
        printf("\nYour total cost of %d plate CHICKEN CURRY is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 5:
        printf("you have choosen PAMPAD.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nPAMPAD per piece RS.5");
        total = amount*5;
        printf("\nYour total cost of %d piece PAMPAD is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}
