#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *newnode, *head, *temp;
	int choice=1, count=0;
	head=NULL;
	while(choice==1)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("\nenter data: ");
		scanf("%d", &newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("\nDo you want to continue:1 for yes and 0 for no: ");
		scanf("%d", &choice);
	}
	printf("\n------------------");
	temp=head;
	printf("\nthe data are given below:");
	while(temp!=0)
	{
		printf("\n%d", temp->data);
		temp=temp->next;
		count++;
	}
	printf("\ntotal number data you entered is: %d", count);
}

