#include <stdio.h>
int Fibonacci(int x)
{
	int a = 1;
	int b = 0;
	int ret;
	
	if (x == 1)
		ret = 1;
	
	for (int i = 1; i < x; i++)
	{
		ret = a + b;
		b = a;
		a = ret;
	}
	return ret;
}
int main(void)
{
	int n;
	printf("������һ����С��1������\n");
	while (scanf("%d", &n) != 1 || n < 1)
	{
		printf("������������������һ����С��1������\n");
	}
	printf("Fibonacci���еĵ�%d��Ϊ%d\n", n, Fibonacci(n));
	return 0;
}