#include <stdio.h>
const int M_PER_H = 60;
int main(void)
{
	int m;
	
	printf("请输入分钟数：\n");
	scanf("%d",&m);
	while (m > 0){
		printf("%d 分钟 = %d 小时 %d 分钟\n",m,m/M_PER_H,m%M_PER_H);
		printf("输入数值小于0时退出\n");
		scanf("%d",&m);
	}
	return 0;
}
