#include <stdio.h>
int main(void)
{
	double mile;
	double gallon;
	double mg;
	
	const float L=3.785;
	const float KM=1.609;

	printf("输入行驶的英里数：\n");
	scanf("%lf",&mile);
	
	printf("输入消耗汽油的加仑数：\n");
	scanf("%lf",&gallon);

	mg=mile/gallon;


	printf("消耗每加仑汽油行驶的英里数=%.1e\n",mg);
	printf("每行驶100公里消耗汽油的升数=%.1e\n",L/(mg*100*KM));
	return 0;
}
