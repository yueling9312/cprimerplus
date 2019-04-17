#include <stdio.h>
#include "2_pe12-2a.h"
static char * mode;
static double dist;
static double cons;
void get_mode(int a)
{	
	static int last;
	if (a == 0)
		mode = "metric";
	else if (a == 1)
		mode = "US";
	else
		printf("Invalid mode specified. Mode %d(%s) used.\n", last, mode);	
	last = a;
}
void get_info(void)
{	
	if (mode == "metric")
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%lf", &dist);
		printf("Enter fuel consumed in liters:");
		scanf("%lf", &cons);
	}
	else
	{
		printf("Enter distance traveled in miles:");
		scanf("%lf", &dist);
		printf("Enter fuel consumed in gallons:");
		scanf("%lf", &cons);
	}
}
void show_info(void)
{
	if (mode == "metric")
		printf("Fuel consumed is %.2lf liters per 100km.\n", cons / dist * 100);

	else
		printf("Fuel consumed is %.1lf miles per gallons.\n", dist / cons);
}