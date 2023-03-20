#include <stdio.h>
#include <string.h>
struct Grade
{
    int mark;
    char grade[30];

} stdgrd;

struct Student
{
    int s_id;
    int stu_ph;
    char s_name[30];
    char gender[30];
    struct Grade stdgrd;
};

void display(struct Student stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter STUDENT-%d ID: ", i + 1);
        scanf("%d", &stu[i].s_id);
        printf("\nEnter STUDENT-%d NAME: ", i + 1);
        scanf("%s", stu[i].s_name);
        printf("\nEnter STUDENT-%d PHONE NUMBER: ", i + 1);
        scanf("%x", &stu[i].stu_ph);
        printf("\nEnter STUDENT-%d GENDER: ", i + 1);
        scanf("%s", stu[i].gender);
        printf("\nEnter STUDENT-%d TOTAL MARK: ", i + 1);
        scanf("%d", &stu[i].stdgrd.mark);
        printf("\nEnter STUDENT-%d GRADE: ", i + 1);
        scanf("%s", stu[i].stdgrd.grade);
        printf("\n---------#####-------------ANOTHER ONE!!!-----------------#####-----------\n");
    }
    printf("\n");
    printf("\n****************DETAILS ARE SHOWN BELOW******************\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");
    printf("\nSL NO  \tSTUDENT ID  \tSTUDENT NAME  \tPHONE NUMBER \tGENDER \t TOTAL MARK \tGRADE\n");
    printf("\n-------------------X------------------------------------------------X------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d  \t %d   \t\t %s     \t %x     \t %s  \t  %d  \t\t %s\n", i + 1, stu[i].s_id, stu[i].s_name, stu[i].stu_ph, stu[i].gender, stu[i].stdgrd.mark, stu[i].stdgrd.grade);
        printf("\n---------------------------------------------------------------------------------------------\n");
    }
}

int main()
{
    int n;
    printf("\n****************STUDENT DETAILS******************\n");
    printf("\n----X----------------------X---------------------X---\n");
    printf("\nEnter the number of students record you want: ");
    scanf("%d", &n);
    struct Student stu[n];
    display(stu, n);
}
