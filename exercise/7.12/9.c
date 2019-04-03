#include <stdio.h>
#include <stdbool.h>
bool isPrime(int x)
{
	for (int i = 2; i * i <= x; i++)
	{	if (x % i == 0)
			return false;
	}
	return true;
}
int main(void)
{
	int a;
	printf("请输入一个正整数:\n");
	while (scanf("%d",&a) ==1 && a != 0)
	{
		for (int i = 2; i <= a; i++)
			if (isPrime(i))
				printf("%4d",i);
		printf("\n");
	}
	printf("Bye!\n");
	return 0;
}
