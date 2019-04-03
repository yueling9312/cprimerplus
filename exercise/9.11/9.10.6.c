#include <stdio.h>
void alter(int * x, int * y)
{
	*x += *y;
	*y = *x - 2 * *y;	
}
int main(void)
{
	int a = 9;
	int b = 3;
	printf("%d %d\n", a, b);
	alter(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}