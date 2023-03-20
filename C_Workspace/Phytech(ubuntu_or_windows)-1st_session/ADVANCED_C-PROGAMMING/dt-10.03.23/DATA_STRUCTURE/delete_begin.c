#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
int main()
{
    struct node *head,*temp,*new;
    int choice=1,count=0;
    head=NULL;
    while(choice!=0)
    {
      
       new=(struct node*) malloc(sizeof(struct node));
       printf("Enter data: ");
       scanf("%d",&new->data);
       new->next=0;
       if(head==0)
       {
        head=temp=new;
       }
       else
       {
        temp->next=new;
        temp=new;
       }

       printf("y/n: Enter 1 for y, Enter 0 for n: ");
       scanf("%d",&choice);
    }

    //delete at first
    temp=head;
    temp=temp->next;
    free(head);
    head=temp;


    printf("\nthe data are given below:\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\nNo of nodes = %d",count);
}
