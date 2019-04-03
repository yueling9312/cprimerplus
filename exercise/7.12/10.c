#include <stdio.h>
#define T0_R 0.15
#define T1_R 0.28
int main(void)
{
	int choice;
	double wages;
	double tax;
	int t0;

	printf("请选择类别：\n");
	printf("1) 单身			2) 户主	\n");
	printf("3) 已婚共有		4) 已婚离异\n");
	printf("5) quit\n");

	while(scanf("%d", &choice) == 1 && choice != 5)
	{
		switch (choice)
		{
			case 1: t0 = 17850;
				  break;
			case 2: t0 = 23900;
				  break;
			case 3: t0 = 29750;
				  break;
			case 4: t0 = 14875;
				  break;
			default: printf("请输入正确的选项！\n");
				 continue;
		}
	printf("请输入应纳税收入：");
	scanf("%lf",&wages);
	if (wages <= t0)
		tax = wages * T0_R;
	else
		tax = t0 * T0_R + (wages - t0) * T1_R;
	printf("收入%.2lf	税金%.2lf\n", wages, tax);
	}
	printf("Bye!\n");
	return 0;
}
