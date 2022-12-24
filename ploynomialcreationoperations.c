#include<stdio.h>
#include<stdlib.h>
struct e
{
	int coeff;
	int exp;
};
struct poly
{
	int n;
	struct e *p;
};
void create(struct poly *s)
{
	int i;
	scanf("%d",&s->n);
	s->p=(struct e*)malloc(s->n*sizeof(struct e));
	printf("enter all elements\n");
	for(i=0;i<s->n;i++)
	{
		scanf("%d%d",&s->p[i].coeff,&s->p[i].exp);	
	}
}
struct poly* addition(struct poly *s1,struct poly *s2)
{
	struct poly *sum;
	sum =(struct poly*)malloc(sizeof(struct poly));
	sum->p=(struct e*)malloc(s1->n+s2->n*sizeof(struct e));
	int i,j,k;
	i=j=k=0;
	while(i<s1->n || j<s2->n)
	{
		if(s1->p[i].exp>s2->p[j].exp)
		{
			sum->p[k++]=s1->p[i++];
		}
		else if(s2->p[j].exp>s1->p[i].exp)
		{
			sum->p[k++]=s2->p[j++];
		}
		else
		{
			sum->p[k].exp=s1->p[i].exp;
			sum->p[k++].coeff=s1->p[i++].coeff+s2->p[j++].coeff;
		}
	}
	for(;i<s1->n;i++)
	{
		sum->p[k++]=s1->p[i];
	}
	for(;j<s2->n;j++)
	{
		sum->p[k++]=s2->p[j];
	}
	sum->n=k;
	return sum;
}
void display(struct poly s)
{
	int i;
	for(i=0;i<s.n;i++)
	{
		printf("%dX%d+",s.p[i].coeff,s.p[i].exp);
	}
}
int main()
{
	struct poly s1;
	struct poly s2;
	struct poly *s3;
	create(&s1);
	create(&s2);
	s3=addition(&s1,&s2);
	printf("first polynomail:\n");
	display(s1);
	printf("second polynomial:\n");
	display(s2);
	printf("addition of polynomial:\n");
	display(*s3);
	return 0;
}
