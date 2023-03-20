#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct dept
{
    char dept[30];
}empdept;
struct emp
{
    int emp_no;
    float salary;
    char e_name[20];
    struct dept empdept;
}employee;
void display(struct emp employee[])
{
    for(int i=0; i<3; i++)
    {
        printf("\nenter employee%d number, salary, name and department respectively\n", i+1);
        scanf("\n%d\n%f\n%s\n%s", &employee[i].emp_no, &employee[i].salary, employee[i].e_name, employee[i].empdept.dept);
    }

    for(int i=0; i<3; i++)
    {
        printf("\nemployoee%d number is:%d\temployee%d salary is:%.2f\temployee%d name is:%s\this department is:%s", i+1, employee[i].emp_no, i+1, employee[i].salary, i+1, employee[i].e_name, employee[i].empdept.dept);
    }
}
int main()
{
    struct emp employee[3];
    display(employee);
    return 0;
}
