#include <stdio.h>
int main(void)
{
	const int count = 8;
	double a[count];
	double b[count];
	for (int i = 0; i < count; i++)
	{
		printf("请输入1个double类型的数：");
		scanf("%lf", &a[i]);
	}

	b[0] = a[0];
	for (int i = 0; i < count; i++)
	{
		b[i + 1] = a[i + 1] +b[i];
		printf("%8.2lf",a[i]);
	}
	printf("\n");

	for (int i = 0; i < count; i++)
	{
		printf("%8.2lf",b[i]);
	}
	printf("\n");

	return 0;
}
