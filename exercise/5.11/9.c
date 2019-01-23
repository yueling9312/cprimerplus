#include <stdio.h>
void Temperatures(double ht);

int main(void)
{
	double ht;
	double st;
	double kt;
	//int ret;

	printf("请输入一个华氏温度：");
	scanf("%lf",&ht);
	Temperatures(ht);
		
	printf("请再输入一个华氏温度(输入q或其他非数字时，退出)：");
	//int ret = scanf("%lf",&ht);
	//printf("%d\n",ret);
	while (1 == scanf("%lf",&ht))
	{
		Temperatures(ht);
		printf("请再输入一个华氏温度(输入q或其他非数字时，退出)：");
		//ret = scanf("%lf",&ht);
	}
	printf("bye\n");
}

void Temperatures(double ht)
{
	double st;
	double kt;
	const double ht_to_st = 9.0 / 5.0;
	const double st_to_kt = 273.16;

	st = (ht - 32) / ht_to_st;
	kt =(ht - 32) / ht_to_st + st_to_kt;

	printf("%.2f华氏 = %.2f摄氏 = %.2f开式\n",ht,st,kt);
}
