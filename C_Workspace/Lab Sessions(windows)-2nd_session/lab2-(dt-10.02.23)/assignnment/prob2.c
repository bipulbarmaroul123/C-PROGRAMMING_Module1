#include<stdio.h>
int main()
{
    int emp_id, wh, sal;
    float salary;
    printf("enter the employee id:\n");
    scanf("%d", &emp_id);
    printf("enter working hour:\n");
    scanf("%d", &wh);
    printf("enter salary per hour:\n");
    scanf("%d", &sal);
    salary = sal*wh;
    printf("employee id:%d\n", emp_id);
    printf("salary = U$ %0.2f\n", salary);
    return 0;
}
