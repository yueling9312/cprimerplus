#include <stdio.h>
#define PRINCIPAL 100
#define SINGLE_INSTEREST 0.1
#define COMPOUND_INSTEREST 0.05
double Daphne_investment(int year)
{
	return (1 + SINGLE_INSTEREST * year) * PRINCIPAL;
}
double my_pow(double x, int y)
{
	double a = 1;
	for(int i = 0; i < y; i++)
		a *= x;
	return a;
}

double Deirgre_investment(int year)
{
	return my_pow(1 + COMPOUND_INSTEREST, year) * PRINCIPAL;
}
int main(void)
{
	int i = 0;
	while(Deirgre_investment(i) <= Daphne_investment(i))
		i++;
	printf("Daphne's investment%8.2lf\n",Daphne_investment(i));
	printf("Deirgre's investment%8.2lf\n",Deirgre_investment(i));
	printf("year%8d\n",i);

	return 0;
}
