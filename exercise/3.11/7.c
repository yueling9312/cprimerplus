#include <stdio.h>
int main(void)
{
	int a;
	printf("输入你的身高：");
	printf("___cm\b\b\b\b\b");
	scanf("%d",&a);
	printf("你的身高是%.2f英寸！\n",a/2.54);
	return 0;
}
