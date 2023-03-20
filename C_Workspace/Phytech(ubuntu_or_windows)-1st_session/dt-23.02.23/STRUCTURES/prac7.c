#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp
{
    int emp_no;
    float salary;
    char e_name[20];
}employee;
void display(struct emp employee[])
{
    for(int i=0; i<3; i++)
    {
        printf("\nemployoee%d number is:%d\temployee%d salary is:%.2f\temployee%d name is:%s", i+1, employee[i].emp_no, i+1, employee[i].salary, i+1, employee[i].e_name);
    }
}
int main()
{
    struct emp employee[3] = {{10, 50000.00, "bipul"}, {11, 60000.00, "barma"}, {13, 60000.00, "raul"}};
    display(employee);
    return 0;
}
