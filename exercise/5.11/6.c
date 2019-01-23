//5.13
//a++测试
//计算前n个整数的平方和
#include <stdio.h>
int main(void)
{
	//int sum;
	int count;
	int n;
	int square;
	int sum_square;	

	sum_square = 0;
	count = 0;
	//sum = 0;
	//square = 0;

	printf("请输入总数：\n");
	scanf("%d",&n);

	while (count++ < n) //第一判断时0//while循环的测试条件结束后为序列点
	{
		//sum = sum + count;//第一次计算时为1//因为只有一条语句，因此不用使用{}
		sum_square = sum_square + count*count;
	}	
	printf("sum_square = %d\n",sum_square);
	return 0;
}  
