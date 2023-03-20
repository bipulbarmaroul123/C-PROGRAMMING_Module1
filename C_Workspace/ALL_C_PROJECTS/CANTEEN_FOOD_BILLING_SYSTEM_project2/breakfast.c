#include<stdio.h>
#include<string.h>

int breakfast(int total)
{
    int amount, c;
    char n[10];
    main:
    printf("You are inside the BREAKFAST section!!!\n");
    printf("\nEnter your name: ");
    scanf("%s", &n);
    printf("\n---------HERE ARE THE ITEMS LIST WITH PRICE--------\n");
    printf("\n1. MAGGIE -----> (30rs.)\n2. DOSA ------> (35rs.)\n3. CHOWMIN ------> (20rs.)\n4. PURI AND SABJI ------> (35rs.)\n5. BADA AND SAMBAR ------> (30rs.)\n6. PARATHA DALMA ------> (40rs.)");
    printf("\n");
    printf("\nChoose your dish: ");
    scanf("%d", &c);
    printf("\nEnter your amount you want: ");
    scanf("%d", &amount);
    switch(c)
    {
        case 1:
        printf("you have choosen MAGGIE.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nMAGGIE  per plate RS.30");
        total = amount*30;
        printf("\nYour total cost of %d plate MAGGIE is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;
        
        case 2:
        printf("you have choosen DOSA.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nDOSA per plate RS.35");
        total = amount*35;
        printf("\nYour total cost of %d plate DOSA is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 3:
        printf("you have choosen CHOWMIN.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nCHOWMIN per plate RS.20");
        total = amount*20;
        printf("\nYour total cost of %d plate CHOWMIN is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 4:
        printf("you have choosen PURI AND SABJI.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nPURI AND SABJI per plate RS.35");
        total = amount*35;
        printf("\nYour total cost of %d plate PURI AND SABJI is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 5:
        printf("you have choosen BADA AND SAMBAR.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nBADA AND SAMBAR per plate RS.30");
        total = amount*30;
        printf("\nYour total cost of %d plate CHAKULI AND MATTAR is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 6:
        printf("you have choosen PARATHA DALMA.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nPARATHA DALMA per plate RS.40");
        total = amount*40;
        printf("\nYour total cost of %d plate PARATHA DALMA is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}
