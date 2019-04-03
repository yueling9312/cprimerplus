#include <stdio.h>
int main(void)
{
	int min;
	int max;
	printf("请输入该表格的最小整数：");
	scanf("%d",&min);
	printf("请输入该表格的最大整数：");
	scanf("%d",&max);
	for(int i = 0, print = min; i < max - min + 1; i++, print++)
		printf("%8d%8d%8d\n",print, print * print, print * print * print);
	printf("\n");
	return 0;
}

