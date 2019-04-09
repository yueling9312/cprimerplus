#include <stdio.h>
#define CLOS 5
void sum_arr(int ar2[], int ar0[], int ar1[], int clos)
{
	for (int i = 0; i < clos; i++)
	{
		ar2[i] = ar0[i] + ar1[i];
		printf("%d ", ar2[i]);
	}
	printf("\n");
}
int main(void)
{
	const int source1[CLOS] = { 1, 2, 3, 4, 5};
	const int source2[CLOS] = { 5, 4, 3, 2, 1 };
	int target[CLOS];
	sum_arr(target, source1, source2, CLOS);
	return 0;
}