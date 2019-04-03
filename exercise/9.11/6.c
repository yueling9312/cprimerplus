#include <stdio.h>
void change(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void seq_of(double *x, double *y, double *z)
{
	if (*x > *y)
		change(x, y);
	if (*y > *z)
		change(y, z);
	if (*x > *y)
		change(x, y);
}

void bubble_sort(int *a, int length) 
{
	for (int j = length; j > 1; j--)
	{
		for (int i = 0; i < length - 1; i++)
		{
			if (*(a + i) > *(a + i + 1))
				change(a + i, a + i + 1);			
		}
		length--;
	}	
}


int main(void)
{
	double a = 19.99;
	double b = 13.01;
	double c = 6.78;

	printf("%.2lf %.2lf %.2lf\n", a, b, c);
	//seq_of(&a, &b, &c);
	printf("%.2lf %.2lf %.2lf\n", a, b, c);

	int t[8] = { 9,8,7,6,5,4,3,3 };
	bubble_sort(t, sizeof(t) / sizeof(t[0]));
	for (int i = 0; i < 8; i++)
		printf("%d", t[i]);
	putchar('\n');
	return 0;
}