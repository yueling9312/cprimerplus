#include <stdio.h>
#include <string.h>
int main(void)
{
	char first [10];
	char second [10];
	int width1;
	int width2;


	printf("输入名字：\n");
	scanf("%s",first);
	printf("输入姓氏：\n");
	scanf("%s",second);

	printf("%s %s\n",first,second);
	width1=strlen(first);
	width2=strlen(second);
	printf("%*d %*d\n",width1,width1,width2,width2);
	printf("%-*d %-*d\n",width1,width1,width2,width2);
	return 0;
}
