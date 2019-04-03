#include <stdio.h>

int print_and_scanf(double* a, double *b){
	printf("请输入两个数，中间以空格分隔（输入非数字退出）：");
	return (2 == scanf("%lf %lf", a, b));
}



int main(void)
{
	double a, b;
	int i;
	//printf("请输入两个数，中间以空格分隔（输入非数字退出）：");
	//printf("%d\n",i); 
	//while(2 == scanf("%lf %lf", &a, &b))
	while(print_and_scanf(&a, &b))
	{
		printf("%lf\n",(a - b)/(a * b));
	//	printf("请输入两个数，中间以空格分隔（输入非数字退出）：");
	}
	return 0;
}
