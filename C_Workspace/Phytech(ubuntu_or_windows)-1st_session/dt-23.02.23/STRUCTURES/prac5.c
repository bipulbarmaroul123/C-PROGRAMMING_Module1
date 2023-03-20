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
    struct emp emp[3] = {{10, 50000.00, "bipul"}, {11, 60000.00, "barma"}, {13, 60000.00, "raul"}};
    for(int i=0; i<3; i++)
    {
        printf("\n%d\t%.2f\t%s", emp[i].emp_no, emp[i].salary, emp[i].e_name);
    }
    return 0;
}
