#include <stdio.h>
int main(void)
{
	int number;
	int count_double = 0;
	int count_single = 0;
	int sum_double = 0;
	int sum_single = 0;
	double average_double;
	double average_single; 
	while (scanf("%d",&number) == 1 && number !=0)
	{
		if (number % 2 == 0)
		{
			count_double++;
			sum_double = sum_double + number;
		}
		else
		{
			count_single++;
			sum_single = sum_single +number;
		}
	}
	average_double = (double)sum_double / count_double;
	average_single = (double)sum_single / count_single;
	printf("偶数个数%d 平均值%.2lf 奇数个数%d 平均值%.2lf\n",count_double, average_double, count_single, average_single);
	return 0;
}

