#include <stdio.h>
#define CLOS 5
void copy_arr(double ar1[], double ar0[], int clos)
{
	for (int i = 0; i < clos; i++)
	{
		ar1[i] = ar0[i];
		printf("%lf %lf\n", ar1[i], ar0[i]);
	}
	printf("\n");
}

void copy_ptr(double(*ar2), double(*ar0),int clos)
{
	for (int i = 0; i < clos; i++)
	{
		*(ar2 + i) = *(ar0 + i);
		printf("%lf %lf\n", *(ar2 + i), *(ar0 + i));
	}
	printf("\n");
}

void copy_ptrs(double(*ar3), double(*ar0), double(*ar4))
{
	for (int i = 0; i < ar4 - ar0; i++)
	{
		*(ar3 + i) = *(ar0 + i);
		printf("%lf %lf\n", *(ar3 + i), *(ar0 + i));
	}
	printf("\n");
}

int main(void)
{
	const double source[CLOS] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[CLOS];
	double target2[CLOS];
	double target3[CLOS];
	copy_arr(target1, source, CLOS);
	copy_ptr(target2, source, CLOS);
	copy_ptrs(target3, source, source + CLOS);
	return 0;
}