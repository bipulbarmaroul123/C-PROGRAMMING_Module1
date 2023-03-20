#include <stdio.h>
#include <string.h>
struct in_game
{
    int code1;
    char ig_Gname[10];
} ig;
struct out_game
{
    int code2;
    char og_Gname[10];
} og;
typedef struct
{
    int id;
    char name[10];
    int age;
    char type;
    union
    {
        struct in_game ig;
        struct out_game og;
    } gaming;
} player;

int main()
{
    int n, i;
    printf("\nhow many players details you want: ");
    scanf("%d", &n);
    player p[10];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter player-%d ID: ", i + 1);
        scanf("%d", &p[i].id);
        printf("\nEnter player-%d NAME: ", i + 1);
        scanf("%s", p[i].name);
        printf("\nEnter player-%d AGE: ", i + 1);
        scanf("%d", &p[i].age);
        printf("\nEnter which type of game want to play 'i' for IN-DOOR game and 'o' for OUT-DOOR game: ");
        scanf(" %c", &p[i].type);


        if((p[i].type) == 'i')
        {
            printf("\nEnter player%d IN-DOOR GAME-ID: ", i+1);
            scanf("%d", &p[i].gaming.ig.code1);
            printf("\nEnter player%d IN-DOOR GAME-NAME: ", i+1);
            scanf("%s", p[i].gaming.ig.ig_Gname);
        }
        else
        {
            printf("\nEnter player%d OUT-DOOR GAME-ID: ", i+1);
            scanf("%d", &p[i].gaming.og.code2);
            printf("\nEnter player%d OUT-DOOR GAME-NAME: ", i+1);
            scanf("%s", p[i].gaming.og.og_Gname);
        }
    }
    printf("\n************PLAYERS DETAILS ARE SHOWN BELOW************");
    printf("\n");
    printf("\nID\tPLAYER NAME\tPLAYER AGE\tIN-DOOR ID\tIN-DOOR GAME\tOUT-DOOR ID\tOUT-DOOR GAME");
    printf("\n---------X-------------------------------------X---------------------------------------------X------------\n"); 
    for (int i = 0; i < n; i++)
    {
        printf("\n%d\t%s\t\t%d", p[i].id, p[i].name, p[i].age);
        if ((p[i].type) == 'i')
        {
            printf("\t\t%d\t\t%s", p[i].gaming.ig.code1, p[i].gaming.ig.ig_Gname);
            printf("\n-----------------------------------------------------------------------------------------------------------\n");
        }
        else
        {
            printf("\t\t\t\t\t\t %d\t\t %s", p[i].gaming.og.code2, p[i].gaming.og.og_Gname);
            printf("\n-----------------------------------------------------------------------------------------------------------\n");
        }
    }
    return 0;
    }
