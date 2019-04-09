#include <stdio.h>
#define CLOS 5
#define ROWS 3
void print(void)
{
	printf("请输入3组数，每组数包含5个double类型的数:\n");
}
void a_number(double ar[][CLOS], int rows)
{
	double n;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < CLOS; j++)
		{
			while (scanf("%lf", &n) != 1)
				print();
			ar[i][j] = n;
			//printf("%.1lf ", ar[i][j]);
		}
		//printf("\n");
	}
}
void b_average(double ar1[], double ar[][CLOS], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		double sum = 0.0;
		for (int j = 0; j < CLOS; j++)
			sum += ar[i][j];
		ar1[i] = sum / CLOS;
		//printf("%.1lf ", ar1[i]);
	}
	//printf("\n");
}
double c_average(double ar[][CLOS], int rows)
{
	double sum = 0.0;
	double average = 0.0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < CLOS; j++)
			sum += ar[i][j];
	}
	average = sum / (CLOS * rows);
	//printf("%.1lf\n", average);
	return average;
}
double d_max(double ar[][CLOS], int rows)
{
	double max = ar[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < CLOS; j++)
		{
			if (ar[i][j] > max)
				max = ar[i][j];
		}
	}
	//printf("%.1lf\n", max);
	return max;
}
void e_print(double ar1[], double ar[][CLOS], int rows)
{
	printf("a:\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < CLOS; j++)
			printf("%.1lf ", ar[i][j]);
		printf("\n");
	}
	printf("\n");

	printf("b:\n");
	for (int i = 0; i < rows; i++)
		printf("%.1lf ", ar1[i]);
	printf("\n");

	printf("c:\n");
	printf("%.1lf\n", c_average(ar, ROWS));

	printf("d:\n");
	printf("%.1lf\n", d_max(ar, ROWS));
}
int main(void)
{
	const double target[ROWS][CLOS];
	double average[CLOS];
	print();
	a_number(target, ROWS);
	b_average(average, target, ROWS);
	c_average(target, ROWS);
	d_max(target, ROWS);
	e_print(average, target, ROWS);
	printf("bye!\n");
	return 0;
}