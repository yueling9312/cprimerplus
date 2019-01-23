#include <stdio.h>
void cube(double f);
int main(void)
{
	double f;
	printf("请输入一个double类型的数：\n");
	scanf("%lf",&f);
	cube(f);

	return 0;
}

void cube(double f)
{
	//double f;
	double f_cube;

	f_cube = f * f * f;
	printf("立方值=%.2f\n",f_cube);
}

//int main(void)
//	printf("请输入一个double类型的数：\n");
//	scanf("%lf",&
