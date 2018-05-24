#include <stdio.h>
int main(void)
{
	float MB;
	float speed;
	float time;
	
	printf("输入下载速度（Mb\\s)：");
	scanf("%f",&speed);
	printf("输入文件大小（MB）：");
	scanf("%f",&MB);
	
	time=MB*8/speed;

	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconfs.\n",speed,MB,time);
	
	return 0;
}
