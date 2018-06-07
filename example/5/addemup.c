//5.13
//a++测试
//计算前20个整数的和
#include <stdio.h>
int main(void)
{
	int sum;
	int count;

	sum = 0;
	count = 0;

	while (count++ < 20) //第一判断时0//while循环的测试条件结束后为序列点
		sum = sum + count;//第一次计算时为1//因为只有一条语句，因此不用使用{}
	printf("sum = %d\n",sum);
	return 0;
}  
