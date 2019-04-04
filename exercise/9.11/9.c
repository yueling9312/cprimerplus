#include <stdio.h>
double my_pow(double x, int y)
{
	double a = 1;
	if (x < 0.00000000001 && y == 0)
		printf("0的0次未定义，将该值处理为1\n");
	else if (x < 0.00000000001)
		return 0;
	else if (y < 0)
		a = my_pow(x, y + 1) / x;
	else
		return a;
}
int main(void)
{
	double a;
	int b;

	a = 0;
	b = 0;
	printf("%.2lf\n", my_pow(a, b));

	a = 0;
	b = 2;
	printf("%.2lf\n", my_pow(a, b));

	a = 2;
	b = 0;
	printf("%.2lf\n", my_pow(a, b));

	a = 2.11;
	b = -1;
	printf("%.2lf\n", my_pow(a, b));

	a = 2.11;
	b = -2;
	printf("%.2lf\n", my_pow(a, b));

	return 0;
}