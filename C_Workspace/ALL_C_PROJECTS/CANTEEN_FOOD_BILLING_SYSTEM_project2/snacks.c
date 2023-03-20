#include<stdio.h>
#include<string.h>

int snacks(int total)
{
    int amount, c;
    char n[10];
    main:
    printf("You are inside the SNACKS section!!!\n");
    printf("\nEnter your name: ");
    scanf("%s", &n);
    printf("\n---------HERE ARE THE ITEMS LIST WITH PRICE--------\n");
    printf("\n1. BADA ------> (5rs.)\n2. SAMOSA ------> (5rs.)\n3. ALUCHOP ------> (5rs.)\n4. SANDWICH ------> (15rs.)\n5. MUDHI AND MIXTURE ------> (10rs.)");
    printf("\n");
    printf("\nChoose your dish: ");
    scanf("%d", &c);
    printf("\nEnter your amount you want: ");
    scanf("%d", &amount);
    switch(c)
    {
        case 1:
        printf("you have choosen BADA.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nBADA per piece RS.05");
        total = amount*5;
        printf("\nYour total cost of %d piece BADA is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;
        
        case 2:
        printf("you have choosen SAMOSA.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nSAMOSA per piece RS.05");
        total = amount*5;
        printf("\nYour total cost of %d piece SAMOSA is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 3:
        printf("you have choosen ALUCHOP.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nALUCHOP per piece RS.05");
        total = amount*5;
        printf("\nYour total cost of %d piece ALUCHOP is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 4:
        printf("you have choosen SANDWICH.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nSANDWITCH per piece RS.15");
        total = amount*15;
        printf("\nYour total cost of %d piece SANDWICH is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        case 5:
        printf("you have choosen MUDHI AND MIXTURE.");
        printf("\n\n$$$$-----BILL------$$$$\n");
        printf("\nCUSTOMER NAME: %s", n);
        printf("\nMUDHI AND MIXTURE per plate RS.10");
        total = amount*10;
        printf("\nYour total cost of %d plate MUDHI AND MIXTURE is:%d\n", amount, total);
        printf("\n**************---------------****************\n");
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}
