#include<stdio.h>
int main()
{
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 0:printf("  _\n | |\n |_|");
		break;
		case 1:printf(" |\n |");
		break;
		case 2:printf(" _\n _|\n|_");
		break;
		case 3:printf(" _\n _|\n _|");
		break;
		case 4:printf(" |_|\n   |");
		break;
		case 5:printf("  _\n |_\n  _|");
		break;
		case 6:printf("  _\n |_\n |_|");
		break;
		case 7:printf(" _\n  |\n  |");
		break;
		case 8:printf("  _\n |_|\n |_|\n");
		break;
		case 9:printf("  _\n |_|\n  _|");
		break;
	}
	
}
