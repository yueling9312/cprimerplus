#include <stdio.h>
const int D_PER_W = 7;
int main(void)
{
	int d;
	
	printf("请输入天数：\n");
	scanf("%d",&d);
	while (d > 0){
		printf("%d 天 = %d 周 %d 天\n",d,d/D_PER_W,d%D_PER_W);
		printf("输入数值小于或等于0时退出\n");
		scanf("%d",&d);
	}
	return 0;
}
