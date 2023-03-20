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

    //insert at first
    new=(struct node*) malloc(sizeof(struct node));
    printf("Enter data to be added at the beginning of the linked list: ");
    scanf("%d",&new->data);
    new->next=head;
    head=new;

    //print data
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\nNo of nodes=%d",count);

}

