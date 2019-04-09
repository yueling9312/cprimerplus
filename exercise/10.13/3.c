#include <stdio.h>
#define CLOS 5
int max_arr(const int ar[], int clos)
{
	int max = ar[0];
	for (int i = 0; i < clos; i++)
	{
		if (ar[i] > max)
			max = ar[i];
	}
	return max;
}
int main(void)
{
	const int source[CLOS] = { 1, 6, 3, 7, 5 };
	printf("%d\n", max_arr(source, CLOS));
	return 0;
}