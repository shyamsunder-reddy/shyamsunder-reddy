#include<stdio.h>
#include<string.h>
struct data
{
	char name[20];
	int age;
	float salary;
};
int main()
{
	struct data s1[4],temp;
	int i,j;
	//char temp;
	for(i=0;i<4;i++)
	{
		scanf("%s%d%f",s1[i].name,&s1[i].age,&s1[i].salary);
	}
	printf("printing the data before sorting\n");
	for(i=0;i<4;i++)
	{
		printf("%s %d %f\n",s1[i].name,s1[i].age,s1[i].salary);
	}
	printf("printing the data after sorting\n");
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(strcmp(s1[i].name,s1[j].name)>0)
			{
				temp=s1[i];
				s1[i]=s1[j];
				s1[j]=temp;
			}
		}
		printf("%s %d %f\n",s1[i].name,s1[i].age,s1[i].salary);	
	}
	return 0;
}
