//5.13
//a++测试
//计算前n个整数的和
#include <stdio.h>
int main(void)
{
	int sum;
	int count;
	int n;	

	sum = 0;
	count = 0;

	printf("请输入总数：\n");
	scanf("%d",&n);

	while (count++ < n) //第一判断时0//while循环的测试条件结束后为序列点
		sum = sum + count;//第一次计算时为1//因为只有一条语句，因此不用使用{}
	printf("sum = %d\n",sum);
	return 0;
}  
