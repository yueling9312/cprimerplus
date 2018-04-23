#include<stdio.h>
int main(void)
{
	//int days_in_moon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	//年龄&天数
	int years = 1993;
	int month = 8;
	int days = 29;
	
	int cur_years = 2018;
	int cur_month = 4;
	int cur_days = 22;

	years=cur_years-years-1;
	days=365*years;
	
	printf("%d years=%d days\n",years,days);
	printf("%d years=%d days\n",years,365*years);
	return 0;
}
