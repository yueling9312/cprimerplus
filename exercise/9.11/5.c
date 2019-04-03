#include <stdio.h>
void larger_of(double *x, double *y)
{
	if (*x - *y > 0)
		*y = *x;
	else
		*x = *y;
}
int main(void)
{
	double a = 9.99;
	double b = 3.01;

	printf("%.2lf %.2lf\n", a, b);
	larger_of(&a, &b);
	printf("%.2lf %.2lf\n", a, b);
	return 0;
}