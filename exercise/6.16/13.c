#include <stdio.h>
int main(void)
{
	const int a_count = 8;
	int a[a_count];
	a[0] = 1;
	for(int i = 1; i < a_count; i++)
        {
		a[i] =2 * a[i - 1];
	}

	int j = 0;
	do
	{
		printf("%d\n", a[j]);
		j++;
	}while(j < a_count);

	return 0;
}
