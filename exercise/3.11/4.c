#include <stdio.h>
int main (void)
{
	double a;
	
	printf("Enter a floating-point value:");
	scanf("%lf",&a);
	printf("fixed-point notation:%.6f\n",a);
	printf("exponential notation:%.6e\n",a);
	printf("p notation:%a\n",a);
	return 0;
}
