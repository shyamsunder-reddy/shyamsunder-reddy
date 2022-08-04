#include<stdio.h>
struct electricitybill
{
	int units;
	char name[20];
};
int main()
{
	struct electricitybill s1[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s%d",s1[i].name,&s1[i].units);
	}
	for(i=0;i<5;i++)
	{
		printf("name of the coustomer:%s  units consumed:%d\n",s1[i].name,s1[i].units);
	}
	for(i=0;i<5;i++)
	{
		float cost=0;
		if(s1[i].units<=30)
		{
			cost=s1[i].units*1.50;
		    if(cost>500)
			cost=cost+15;
			printf("name of the coustomer:%s  charges:%f\n",s1[i].name,cost);
		}
		else if(s1[i].units<=300)
		{
			cost=s1[i].units*3.00;
		    if(cost>500)
			cost=cost+15;
			printf("name of the coustomer:%s  charges:%f\n",s1[i].name,cost);
		}
		else
		{
			cost=s1[i].units*4.25;
			if(cost>500)
			cost=cost+15;
			printf("name of the coustomer:%s  chargers:%f\n",s1[i].name,cost);
			
		}
	}
	return 0;
}
