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
	printf("请输入一个不小于1的整数\n");
	while (scanf("%d", &n) != 1 || n < 1)
	{
		printf("输入有误，请重新输入一个不小于1的整数\n");
	}
	printf("Fibonacci数列的第%d项为%d\n", n, Fibonacci(n));
	return 0;
}