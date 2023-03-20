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
    struct emp employee[3];
    for(int i=0; i<3; i++)
    {
        printf("\nenter employee%d number, salary, name respectively:\n", i+1);
        scanf("\n%d\n%f\n%s", &employee[i].emp_no, &employee[i].salary, employee[i].e_name);
    }
    for(int i=0; i<3; i++)
    {
        printf("\nemployoee%d number is:%d\temployee%d salary is:%.2f\temployee%d name is:%s", i+1, employee[i].emp_no, i+1, employee[i].salary, i+1, employee[i].e_name);
    }
    return 0;
}
