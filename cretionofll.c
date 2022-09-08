#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
void insert(struct node **head,int a)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=a;
	newnode->next=*head;
	*head=newnode;
} 
void display(struct node *head)
{
	struct node*p;
	p=head;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}
void insertlast(struct node **head,int a)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	temp= *head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	newnode->data=a;
	temp->next=newnode;
	newnode->next=NULL;
}
int main()
{
	struct node *head=NULL;
	insert(&head,12);
	insert(&head,13);
	insert(&head,14);
	insert(&head,15);
	display(head);
	insertlast(&head,35);
	display(head);
}
