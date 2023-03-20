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
    struct emp emp1, emp2, emp3;
    emp1.emp_no = 10;
    emp1.salary = 50000.00;
    strcpy(emp1.e_name, "bipul");

    emp2.emp_no = 20;
    emp2.salary = 60000.00;
    strcpy(emp2.e_name, "barma");

    emp3.emp_no = 30;
    emp3.salary = 70000.00;
    strcpy(emp3.e_name, "raul");
    printf("\nfor employee1 code is:%d and his name is:%s and his salary is:%.2f", emp1.emp_no, emp1.e_name, emp1.salary);
    printf("\n");
    printf("\nfor employee2 code is:%d and his name is:%s and his salary is:%.2f", emp2.emp_no, emp2.e_name, emp2.salary);
    printf("\n");
    printf("\nfor employee3 code is:%d and his name is:%s and his salary is:%.2f", emp3.emp_no, emp3.e_name, emp3.salary);
    return 0;
}
