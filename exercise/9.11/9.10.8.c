#include <stdio.h>
int max(int x, int y, int z)
{
	int max;
	if (x - y > 0)
		max = x;
	else
		max = y;
	if (z - max > 0)
		max = z;
	return max;
}
int main(void)
{
	int a = 9;
	int b = 3;
	int c = 99;
	printf("%d %d %d\n", a, b, c);
	printf("%d\n", max(a, b, c));
	return 0;
}