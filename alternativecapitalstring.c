#include<stdio.h>
#include<stdio.h>
int main()
{
	char str[20];
	gets(str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			continue;
		}
		else if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		else
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
}
