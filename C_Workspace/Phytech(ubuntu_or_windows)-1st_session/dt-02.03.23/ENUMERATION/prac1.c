//arithmatic operation using enum to get perticular state by user input

#include<stdio.h>
int main()
{
    int a, b, ch;
    enum {add, sub, mul, div, mod};
    printf("\n MENU\n");
    printf("0.ADD\n");
    printf("1.SUB\n");
    printf("2.MUL\n");
    printf("3.DIV\n");
    printf("4.MOD\n");
    printf("\nenter your choice: ");
    scanf("%d", &ch);
    printf("\nenter any 2 numbers: ");
    scanf("%d\n%d", &a, &b);
    switch(ch)
    {
        case 0:
        printf("\naddition of two numbers is: %d", a+b);
        break;

        case 1:
        printf("\nsubstraction of two numbers is: %d", a-b);
        break;

        case 2:
        printf("\nmultiplication of two numbers is: %d", a*b);
        break;

        case 3:
        printf("\ndivision of two numbers is: %d", a/b);
        break;

        case 4:
        printf("\nmodulus of two numbers is: %d", a%b);
        break;

        default:
        printf("\nenter a valid number!");
        break;
    }
    return 0;
}
