#include <stdio.h>
#define CM_TO_FEET 30.48
int main(void)
{
	float cm_height;
	int feet_height;
	double inch_height;
	
	printf("请输入一个身高，以厘米为单位（值小于等于0时退出）:\n");
	scanf("%f", &cm_height);
	while (cm_height > 0)
	{
		feet_height = cm_height / CM_TO_FEET;
		inch_height = (cm_height / CM_TO_FEET - feet_height) * 12;		
		printf("%.2f cm = %d feet, %.1f inches\n",cm_height,feet_height,inch_height);
		printf("请输入一个身高，以厘米为单位（值小于等于0时退出）:\n");
		scanf("%f",&cm_height);
	}
	
	printf("bye\n");
	
	//printf("%f\n%d\n%.1f\n",cm_height,feet_height,inch_height);
	return 0;
}
