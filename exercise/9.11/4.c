#include <stdio.h>
double reciprocal(double x)
{
	if (x == 0)
		return 0.00;
	return 1 / x;
}
double har_mean(double x, double y)
{
	return (reciprocal(x) + reciprocal(y)) / 2;
}
int main(void)
{
	double a = 9.99;
	double b = 3.01;

	printf("%.2lf %.2lf\n", a, b);
	printf("%.2lf\n", har_mean(a, b));
	return 0;
}