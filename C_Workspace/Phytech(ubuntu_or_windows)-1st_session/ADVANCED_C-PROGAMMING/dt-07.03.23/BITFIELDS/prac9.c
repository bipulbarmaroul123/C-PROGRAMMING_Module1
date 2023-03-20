#include<stdio.h>
struct employee
{
	int empno;
	int empid;
};
int main()
{
	struct employee e = {.empno = 1, .empid = 2};
	printf("\nemployee number is: %d", e.empno);
	printf("\nemployee id is: %d\n", e.empid);
	return 0;
}

