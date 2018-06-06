//5.9 把秒数转换为分和秒&用户输入秒数&用户输入0时停止
//lyn
#include <stdio.h>
#define SEC_PER_MIN 60
int main(void)
{
	int sec;
	int left;
	int min;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of second (<=0 to quit):\n");
	scanf("%d",&sec);
	while (sec > 0)
	{
		left = sec % SEC_PER_MIN;
		//min = (sec - left) / SEC_PER_MIN;//lyn的做法
		min = sec / SEC_PER_MIN;//例题中的做法&截取整数部分
		
		printf("%d seconds is %d minutes, %d seconds.\n",sec,min,left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d",&sec);
	}
	printf("Done!\n");

	return 0;
}		
