#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i,j,temp,a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++)
	{
		for(j=i+1;j<n/2;j++)
		{
			if(arr[i]>arr[j])
			{
			   temp=arr[i];
			   arr[i]=arr[j];
			   arr[j]=temp;	
			}
		}
	}
	for(i=n/2;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
