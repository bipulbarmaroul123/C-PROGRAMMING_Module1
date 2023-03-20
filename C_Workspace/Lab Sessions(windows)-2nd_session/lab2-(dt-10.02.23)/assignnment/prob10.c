#include<stdio.h>
int main()
{
    int intType;
    char charType;
    float floatType;
    double doubleType; 
    printf("the size of integer is: %ld\n", sizeof(intType));
    printf("the size of float is: %ld\n", sizeof(floatType));
    printf("the size of double is: %ld\n", sizeof(doubleType));
    printf("the size of char is: %ld\n", sizeof(charType));
    return 0;
}

