#include <stdio.h>
//#define W0 10.00
#define W1 1.5
#define OVER 40
#define T1 300
#define T2 450
#define T0_R 0.15
#define T1_R 0.2
#define T2_R 0.25
int main(void)
{
	double hours;
	double wages;
	double tax;
	double income;
	double wages_hour;
	int choice;

	printf("Enter the number corresponding to the desired pay rate or action：\n");
	printf("1) $8.75/hr		2) $9.33/hr	\n");
	printf("3) $10.00/hr		4) $11.20/hr	\n");
	printf("5) quit\n");

	//scanf("%d",&choice);
	while(scanf("%d", &choice) == 1 && choice != 5)
	{
		switch (choice)
		{
			case 1: wages_hour = 8.75;
				  break;
			case 2: wages_hour = 9.33;
				  break;
			case 3: wages_hour = 10.00;
				  break;
			case 4: wages_hour = 11.20;
				  break;
			default: printf("请输入正确的选项！\n");
				 continue;
		}
	printf("请输入每周的工作时间：");
	scanf("%lf",&hours);


	if (hours <= OVER)
		wages = hours * wages_hour;
	else
		wages = ((hours - OVER) * W1 + OVER) * wages_hour;
	
	if (wages <= T1)
		tax = wages * T0_R;
	else if (wages > T1 && wages <= T2)
		tax = T1 * T0_R + (wages - T1) * T1_R;
	else 
		tax = T1 * T0_R + (T2 - T1) * T1_R + (wages - T2) * T2_R;

	income = wages - tax;
	
	printf("收入%.2lf	税金%.2lf	净收入%.2lf\n", wages, tax, income);
	}
	printf("Bye!\n");
	return 0;
}
