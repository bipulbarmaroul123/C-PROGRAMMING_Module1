#include<stdio.h>
struct cal
{
	unsigned int d:5;
	unsigned char m:4;
	unsigned int y:12;
}dat;

int main()
{
	int dt, mo, yr;
        printf("\nenter date: ");
	scanf("%d", &dt);
	printf("\nenter month: ");
        scanf("%d", &mo);
        printf("\nenter year: ");
        scanf("%d", &yr);
	dat.d = dt;
	dat.m = mo;
	dat.y = yr;
	printf("\ntoday's date is = %d:%d:%d", dat.d, dat.m, dat.y);
	printf("\nsize of the structure is: %ld\n", sizeof(dat));
	return 0;
} 

