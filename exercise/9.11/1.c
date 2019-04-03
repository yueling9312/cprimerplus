#include <stdio.h>
double min(double x, double y)
{
	if (x - y > 0)
		return y;
	else
		return x;
}
int main(void)
{
	double a = 9.99;
	double b = 3.01;

	printf("%.2lf %.2lf\n", a, b);
	printf("%.2lf\n", min(a, b));
	return 0;
}