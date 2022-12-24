#include<stdio.h>
#include<stdlib.h>
struct array
{
	int *p;
	int n;
	int m;
};
void create(struct array *s)
{
	int i;
	s->p=(int *)malloc(s->m*sizeof(int));
	for(i=0;i<s->n;i++)
	{
		scanf("%d",&s->p[i]);
	}
}
void insert(struct array *s,int i,int x)
{
	int j;
	if(i<=s->n)
	{
		for(j=s->n-1;j>i;j--)
		{
			s->p[j]=s->p[j-1];
		}
		s->p[i]=x;
		s->n++;
	}
}
int delete(struct array *s,int i)
{
	int j;
	if(i<=s->n)
	{
		for(j=i;j<s->n-1;j++)
		{
			s->p[j]=s->p[j+1];
			
		}
		s->n--;
		return s->p[i];
	}
}
int max(struct array s)
{
	int i,max1;
	max1=s.p[0];
	for(i=1;i<s.n;i++)
	{
		if(s.p[i]>max1)
		{
			max1=s.p[i];
		}
	}
	return max1;
}
int min(struct array s)
{
	int i,min1;
	min1=s.p[0];
	for(i=1;i<s.n;i++)
	{
		if(s.p[i]<min1)
		{
			min1=s.p[i];
		}
	}
	return min1;
}
void sort(struct array *s)
{
	int i,j,temp;
	for(i=0;i<s->n;i++)
	{
		for(j=i+1;j<s->n;j++)
		{
			if(s->p[i]>s->p[j])
			{
				temp=s->p[i];
				s->p[i]=s->p[j];
				s->p[j]=temp;
			}
		}
	}
}
void display(struct array s)
{
	int i;
	for(i=0;i<s.n;i++)
	{
		printf("%d ",s.p[i]);
	}
}
int main()
{
	int ch,ind,ele,a;
	struct array s1;
	scanf("%d%d",&s1.n,&s1.m);
	while(1)
	{
		printf("Menu\n");
		printf("1:create\n");
		printf("2:insert\n");
		printf("3:delete\n");
		printf("4:max\n");
		printf("5:min\n");
		printf("6:sort\n");
		printf("7:display\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create(&s1);
			       break;
			case 2:scanf("%d%d",&ind,&ele);
			       insert(&s1,ind,ele);
			       break;
			case 3:scanf("%d",&ind);
			       a=delete(&s1,ind);
			       printf("deleted element is :%d\n",a);
			       break;
			case 4:a=max(s1);
			       printf("maximum is:%d\n",a);
			       break;
			case 5:a=min(s1);
			       printf("minimum is:%d\n",a);
			       break;
			case 6:sort(&s1);
			       break;
			case 7:display(s1);
			       break;
			default:printf("enter valid choice\n");
		}
		
	}
	return 0;
	
}
