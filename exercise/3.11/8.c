#include <stdio.h>
int main(void)
{
	int cups;
	double pt;
	double os;
	double ts;
	double cs;
	
	printf("输入杯数:");
	scanf("%d",&cups);
	pt=cups/2;
	os=cups*8;
	ts=os*2;
	cs=ts*3;
	printf("=%.2f品脱;\n",pt);
	printf("=%.2f盎司;\n",os);
	printf("=%.2f汤勺;\n",ts);
	printf("=%.2f茶勺;\n",cs);

	return 0;
}
