#include <stdio.h>
#define CLOS 5
void change(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void bubble_sort(int *a, int length)
{
	for(int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (*(a + j) < *(a + j + 1))
				change(a + j, a + j + 1);
		}
	}
}
int main(void)
{
	int source[CLOS] = { 1, 3, 5, 6, 7 };
	bubble_sort(source, CLOS);
	for (int i = 0; i < CLOS; i++)
		printf("%d", source[i]);
	putchar('\n');
	return 0;
}