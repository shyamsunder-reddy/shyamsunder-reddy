#include<stdio.h>
struct student
{
	char name[20];
	int RollNo[10];
	char Address[20];
	float percentage;
};
int main()
{
	struct student s1[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s%d%s%f",s1[i].name,&s1[i].RollNo,s1[i].Address,&s1[i].percentage);
	}
	printf("Name\tRollNumber\tAddressOfTheStudent\tpercentage\n");
	for(i=0;i<5;i++)
	{
		printf("%s\t%d\t%s\t%f\n",s1[i].name,s1[i].RollNo,s1[i].Address,s1[i].percentage);
	}
	printf("Name\tRollNumber\tAddressOfTheStudent\tpercentage\tclass\n");
	for(i=0;i<5;i++)
	{
		if(s1[i].percentage>=70)
		printf("%s\t%d\t%s\t%f\tDistinction\n",s1[i].name,s1[i].RollNo,s1[i].Address,s1[i].percentage);
		else if(s1[i].percentage>=60)
		{
			printf("%s\t%d\t%s\t%f\tFirstClass\n",s1[i].name,s1[i].RollNo,s1[i].Address,s1[i].percentage);	
		}
		else if(s1[i].percentage>=40)
		{
				printf("%s\t%d\t%s\t%f\tSecondClass\n",s1[i].name,s1[i].RollNo,s1[i].Address,s1[i].percentage);
			
		}
		else
			printf("%s\t%d\t%s\t%f\tFail\n",s1[i].name,s1[i].RollNo,s1[i].Address,s1[i].percentage);
	}
	return 0;
}
