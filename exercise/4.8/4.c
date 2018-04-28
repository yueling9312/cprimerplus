#include <stdio.h>
int main(void)
{
	char name [10];
	float height;
	
	printf("输入名字、身高（cm）：\n");	
	scanf("%s %f",name,&height);
	printf("%s, you are %.3fm tall.\n",name,height/100);
	return 0;
}
