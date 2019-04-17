#include <stdio.h>
#include "3_pe12-2a.h"
char* get_mode(int a, int* l_m)
{
	char * MODE = "metric";
	if (a == 0)
	{
		MODE = "metric";
		*l_m = a;
	}
	else if (a == 1)
	{
		MODE = "US";
		*l_m = a;
	}
	else
		printf("Invalid mode specified. Mode %d(%s) used.\n", *l_m, MODE);
	return MODE;
}
void get_info(char* M, double* d, double* c)
{
	if (M == "metric")
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%lf", d);
		printf("Enter fuel consumed in liters:");
		scanf("%lf", c);
	}
	else
	{
		printf("Enter distance traveled in miles:");
		scanf("%lf", d);
		printf("Enter fuel consumed in gallons:");
		scanf("%lf", c);
	}
}
void show_info(char* M, double* d, double* c)
{
	if (M == "metric")
		printf("Fuel consumed is %.2lf liters per 100km.\n", *c / *d * 100);
	else
		printf("Fuel consumed is %.1lf miles per gallons.\n", *d / *c);
}