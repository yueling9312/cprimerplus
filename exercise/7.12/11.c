#include <stdio.h>
#define P_a 2.05
#define P_b 1.15
#define P_c 1.09
#define S0 100
#define W0 5
#define W1 20
#define PW0 6.5
#define PW1 14
#define OVER 0.5
int main(void)
{
	double p0;//单价
	double p = 0;//蔬菜总价（折扣前）
	double P;//蔬菜总价（折扣后）
	double discount;//折扣
	double pw;//运费和包装费
	double wi;//每次输入的蔬菜磅数
	double w;//蔬菜总磅数
	//double s_a;
	//double s_b;
	//double s_c;
	double s;//总费用
	char choice;
	//char category;

	printf("Enter the number corresponding to the desired pay rate or action：\n");
	printf("a) 洋 $2.05/pd	b) 甜菜 $1.15/pd	c) 胡萝卜 $1.09/pd\n");
	printf("q) quit\n");

	while(scanf("%c", &choice) == 1 && choice != 'q')
	{
		switch (choice)
		{
			case 'a': p0 = P_a;
				  //printf("输入q退出\n");
				  break;
			case 'b': p0 = P_b;
				  //printf("输入q退出\n");
				  break;
			case 'c': p0 = P_c;
				  //printf("输入q退出\n");
				  break;
			default: printf("继续选购，输入q退出\n");
				 continue;
		}
	printf("请所需磅数：");
	scanf("%lf",&wi);
	p = p + p0 * wi;
	w = w + wi;
	}

	if (p > 100)
	{
		discount = p * 0.05;
		P = p - discount;
	}
	if (w <= W0)
		pw = PW0;
	else if (w > W0 && w <= W1)
		pw = PW1;
	else 
		pw = PW1 + (w - W1) * OVER;

	s = P + pw;
		
	printf("售价：洋%.2lf	甜菜%.2lf	胡萝卜%.2lf\n", P_a, P_b, P_c);
	printf("订购总重量：%.2lf	蔬菜总价格%.2lf		运费及包装费%.2lf	折扣%.2lf	总费用%.2lf\n", w, p, pw, discount, s);
	printf("Bye!\n");
	return 0;
}
