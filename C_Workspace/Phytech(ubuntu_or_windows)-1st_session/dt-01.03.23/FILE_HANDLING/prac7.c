#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    student s;
    FILE *fp;
    fp = fopen("student.dat", "w");
    printf("\nEnter student details\n");
    while(1)
    {
	    printf("\nEnter student roll number: ");
	    scanf("%d", &s.roll);
	    printf("\nEnter student name: ");
            scanf("%[^\n]", s.name);
	    printf("\nEnter student age: ");
            scanf("%d", &s.age);
            printf("\nEnter student gender: ");
            scanf(" %c", &s.gender);
            printf("\ncontinue.........(y/n): ");
            scanf(" %c", &ch);
            fwrite(&s,sizeof(s),1,fp);
	    if(ch=='n' || ch=='N')
		    break;
    }
    fclose(fp);
    return 0;
}

