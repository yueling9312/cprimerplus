#include <stdio.h>
#define PRINCIPAL 100
#define	WITHDRAWALS 10 
#define COMPOUND_INSTEREST 0.08
/*double my_pow(double x, int y)
{
	double a = 1;
	for(int i = 0; i < y; i++)
		a *= x;
	return a;
}

double Lucky_investment(int year)
{
	double a = my_pow(1 + COMPOUND_INSTEREST, year);
	double b = my_pow(1 + COMPOUND_INSTEREST, year - 1);
	printf("%lf\n",a);
	return (a * PRINCIPAL - WITHDRAWALS * year);
}*/
int main(void)
{
       	int i = 0;
	for(double Lucky_investment = PRINCIPAL; Lucky_investment > 0; i++)
	{
		printf("year%8d Lucky's investment%8.2lf\n",i,Lucky_investment);
		Lucky_investment = Lucky_investment * (1 + COMPOUND_INSTEREST) - WITHDRAWALS;
	}
	printf("year%8d\n",i);

	return 0;
}
