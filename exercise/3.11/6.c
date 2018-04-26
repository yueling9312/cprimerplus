#include <stdio.h>
int main(void)
{
	float a;
	printf("输入水的夸克数：");
	printf("______\b\b\b\b\b\b");
	scanf("%f",&a);
	printf("其中包含%.2e个水分子！\n",a*950/3.0e-23);
	return 0;
}
