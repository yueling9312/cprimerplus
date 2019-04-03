#include <stdio.h>
void print(int n, int m[]);
int main(void)
{
	const int letters = 8;
	int numbers[letters];
	for(int i = 0;i < letters;i++)
	{
		printf("请输入1个整数：");
		scanf("%d",&numbers[i]);
	}
	print(letters, numbers);

	return 0;
}
void print(int n, int m[])
{
	for(int i = n - 1; i >= 0; i--)
		printf("%d",m[i]);
	printf("\n");
//	return 0;
}
