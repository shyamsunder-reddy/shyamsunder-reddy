#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
void insert(struct node* *head,int a)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
/*	if(*head==NULL)
	{
		newnode->data=a;
		*head=newnode;
		newnode->next=NULL;
	}*/
	newnode->data=a;
	newnode->next=*head;
	*head=newnode;
}
void insertafter(struct node* *head,int b)
{
	int a;
	scanf("%d",&a);
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	struct node* temp;
	struct node *c;
	temp=*head;
	while(temp->data!=b)
	{
		temp=temp->next;
	}
	newnode->data=a;
	c=temp->next;
	temp->next=newnode;
	newnode->next=c;
}
void insertbefore(struct node* *head,int b)
{
	int c;
	scanf("%d",&c);
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	struct node* temp;
	temp=*head;
	struct node* a;
	int e;
	while(temp->data!=b)
	{
		temp=temp->next;
	}
	newnode->data=c;
	a=temp->next;
	e=newnode->data;
	newnode->data=temp->data;
	temp->data=e;
	temp->next=newnode;
	newnode->next=a;	
}
void display(struct node *head)
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct node* head=NULL;
	int a;
	scanf("%d",&a);
	
	insert(&head,12);
	insert(&head,13);
	insert(&head,14);
	insert(&head,15);
	display(head);
	insertafter(&head,a);
    display(head);
    insertbefore(&head,a);
    display(head);
    return 0;
}
