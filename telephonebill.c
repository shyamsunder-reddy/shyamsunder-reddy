#include<stdio.h>
struct telebill
{
	char name[20];
	char address[20];
	int teleno[10];
	int nocall;
};
int main()
{
	struct telebill s1[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s%s%d%d",s1[i].name,s1[i].address,&s1[i].teleno,&s1[i].nocall);
	}
	printf("name\taddress\tteleno\tnocall\n");
	for(i=0;i<5;i++)
	{
		//printf("name\taddress\tteleno\tnocall\n");
		printf("%s\t%s\t%d\t%d\n",s1[i].name,s1[i].address,s1[i].teleno,s1[i].nocall);
	}
	printf("name\taddress\tteleno\tnocall\tcost\n");
	for(i=0;i<5;i++)
	{
		int cost =0;
		cost=s1[i].nocall*2;
		//printf("name\taddress\tteleno\tnocall\tcost\n");
		printf("%s\t%s\t%d\t%d\t%d\n",s1[i].name,s1[i].address,s1[i].teleno,s1[i].nocall,cost);
	}
	return 0;
}
