#include <stdio.h>
#include <string.h>
int main(void)
{
	char name [40];
	int width;
	
	printf("输入名字：\n");
	scanf("%s",name);
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);

	width=strlen(name)+3;
	printf("%*s\n",width,name);

	return 0;
}	
