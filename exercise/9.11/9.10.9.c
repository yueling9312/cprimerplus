#include <stdio.h>
#define UP 4
#define DOWN 1

void a_print(void)
{
	printf("Please choose one of the following:\n");
	printf("1) copy files	2) move files\n");
	printf("3) remove files	4) quit\n");
	printf("Enter the number of your choice:\n");
}
int b_number(int x, int y)
{
	int choice;
	scanf("%d",&choice)
	if (x - y > 0)
		max = x;
	else
		max = y;
	if (z - max > 0)
		max = z;
	return choice;
}
int main(void)
{
	int choice;
	a_print();
	while (choice = b_number(UP, DOWN) != 4)
	{
		switch (choice)
		{
		case '1': printf("copy files\n");
			 break;
			 '2': printf("move files\n");
			 break;
			 '3': printf("remove files\n");
			 break;
			 default: printf("error!\n");			
		}
	}
	printf("bye!\n");
	return 0;
}