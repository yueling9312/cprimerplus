#include <stdio.h>
double print(double n, double m);
int main(void)
{
	double a, b;
	int i;
	printf("请输入两个数，中间以空格分隔（输入非数字退出）：");
	i = scanf("%lf %lf",&a, &b);
	while(i == 2)
	{
		printf("%lf\n",print(a, b));
		printf("请输入两个数，中间以空格分隔（输入非数字退出）：");
		i = scanf("%lf %lf",&a, &b);
	}
	return 0;
}
double print(double n, double m)
{
	double anwser = (n - m) / (n * m);
	return anwser;
}
