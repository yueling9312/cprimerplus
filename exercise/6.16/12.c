#include <stdio.h>

int print_and_scanf(int *n)
{
	printf("请输入总运算次数（输入0或负值时退出）：");
	return (1 == scanf("%d", n) && *n > 0);
}

//x^y
int my_pow(int x, int y) {
	int ret = 1;
	for(int i = 0; i < y; ++i) {
		ret *= x;
	}
	return ret;
}

double ci(int x) {
	return (double)(my_pow(1, x) + my_pow(-1, x)) / (x + 1);
}
double ci2(int x)
{
	if(x % 2 == 0)
		return ( 2.0 / (x + 1));
	else
		return 0;

}
double sum(int n)
{
	double s = 0;
	for (int i = 0; i < n; i++)
		{	
			//s = s + ci1(i);
			s = s + ci2(i);

		}
	return s;
}
int main(void)
{
		printf("%lf\n",sum(0));
		printf("%lf\n",sum(1));
		printf("%lf\n",sum(2));
		printf("%lf\n",sum(3));
	int n;
	while(print_and_scanf(&n))
	{
		printf("%lf\n",sum(n));
	}
	return 0;
}
