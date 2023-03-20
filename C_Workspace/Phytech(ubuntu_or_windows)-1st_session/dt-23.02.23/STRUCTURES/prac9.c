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
    struct emp employee = {10, 50000.00, "bipul"}, *poi;
    poi = &employee;
    printf("\nfor employee1 code is:%d and his name is:%s and his salary is:%.2f", (*poi).emp_no, (*poi).e_name, (*poi).salary);
    return 0;
}
