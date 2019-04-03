#include <stdio.h>
#define W0 10.00
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

	printf("请输入一周工作的小时数：");
	scanf("%lf",&hours);

	if (hours <= OVER)
		wages = hours * W0;
	else
		wages = ((hours - OVER) * W1 + OVER) * W0;
	
	if (wages <= T1)
		tax = wages * T0_R;
	else if (wages > T1 && wages <= T2)
		tax = T1 * T0_R + (wages - T1) * T1_R;
	else 
		tax = T1 * T0_R + (T2 - T1) * T1_R + (wages - T2) * T2_R;

	income = wages - tax;
	
	printf("收入%.2lf	税金%.2lf	净收入%.2lf\n", wages, tax, income);
	return 0;
}
