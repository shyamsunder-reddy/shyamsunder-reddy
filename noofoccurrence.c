#include<stdio.h>
struct node
{
	int data;
	struct node* next;
};
void insert(struct node* *head,int a)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(*head==NULL)
	{
		newnode->data=a;
		newnode->next=NULL;
	}
	newnode->data=a;
	newnode->next=*head;
	*head=newnode;
}
void occurrence(struct node *head,int val)
{
	struct node *temp;
	int cnt=0;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==val)
		cnt++;
		temp=temp->next;
	}
	printf("%d\n",cnt);
}
void display(struct node *head)
{
	struct node* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct node* head=NULL;
	int val;
	scanf("%d",&val);
	insert(&head,12);
	insert(&head,13);
	insert(&head,14);
	insert(&head,13);
	insert(&head,16);
	insert(&head,13);
	display(head);
	occurrence(head,val);
}
