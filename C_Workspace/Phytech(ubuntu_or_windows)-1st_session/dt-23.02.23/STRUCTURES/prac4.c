#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp
{
    int emp_no;
    float salary;
    char e_name[20];
};
int main()
{
    struct emp employee[3] = {{10, 50000.00, "bipul"}, {11, 60000.00, "barma"}, {13, 60000.00, "raul"}};
    printf("\nfor employee1 code is:%d and his name is:%s and his salary is:%.2f", employee[0].emp_no, employee[0].e_name, employee[0].salary);
    printf("\nfor employee2 code is:%d and his name is:%s and his salary is:%.2f", employee[1].emp_no, employee[1].e_name, employee[1].salary);
    printf("\nfor employee3 code is:%d and his name is:%s and his salary is:%.2f", employee[2].emp_no, employee[2].e_name, employee[2].salary);
    return 0;
}
