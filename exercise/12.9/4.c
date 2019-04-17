#include <stdio.h>
int count(void)
{
	static i = 0;
	++i;
	return i;
}
int main(void)
{
	int n = 10;
	for (int i = 0; i < n; i++)
		printf("%d	%d\n", count(), i);	
	return 0;
}