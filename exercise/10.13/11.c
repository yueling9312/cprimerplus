#include <stdio.h>
#define CLOS 5
#define ROWS 3
void print(int ar[][CLOS], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < CLOS; j++)
			printf("%4d ", ar[i][j]);
		printf("\n");
	}
	printf("\n");
}
void doub_arr(int ar[][CLOS], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < CLOS; j++)
			ar[i][j] = ar[i][j] * 2;
	}
}
int main(void)
{
	int source[ROWS][CLOS] =
	{
		{1, 2, 3, 4, 5},
		{2, 3, 4, 5, 6},
		{3, 4, 5, 6, 7},
	};
	print(source, ROWS);
	doub_arr(source, ROWS);
	print(source, ROWS);
	return 0;
}