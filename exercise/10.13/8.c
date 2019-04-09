#include <stdio.h>
#define CLOS 7
#define CLOS_T 3
void copy_arr(double ar1[], double ar0[], int clos)
{
	for (int i = 0; i < clos; i++)
	{
		ar1[i] = ar0[i + 2];
		printf("%.1lf ", ar1[i], ar0[i]);
	}
	printf("\n");
}

int main(void)
{
	const double source[CLOS] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target[CLOS_T];
	copy_arr(target, source, CLOS_T);
	return 0;
}