//平方函数
#include <stdio.h>
long square(int n);
int main(void)
{
	long value;
	int x;
	printf("输入一个整数（输入q退出）：\n");
	while	(scanf("%ld",&x) == 1)
	{
		value = square(x);
		printf("%d的平方是%ld.\n",x,value);
		printf("输入一个整数（输入q退出）：\n");
	}
	printf("Bye!\n");

	return 0;
}

long square(int n)
{
	long answer;

	answer = (long)n * n;
	
	return answer;
}
