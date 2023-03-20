#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp
{
    int emp_no;
    float salary;
    char e_name[20];
}employee;
int main()
{
    employee.emp_no = 10;
    employee.salary = 50000.00;
    strcpy(employee.e_name, "bipul");
    printf("\nemployee code of the employee is:%d", employee.emp_no);
    printf("\nsalary of the employee is:%.2f", employee.salary);
    printf("\nname of the employee is:%s", employee.e_name);
    printf("\nsize of the employee is:%d", sizeof(struct emp));
    return 0;
}

