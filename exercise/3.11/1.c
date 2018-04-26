#include <stdio.h>
int main(void)
{
	short a;
	float b,c;
	
	a=32767;
	printf("%hd\n%hd\n",a,a+1);

	b=3.77e37;
	printf("%f\n%e\n",b,b*10);

	c=3.67e-45;
	//int a0 = 0;
	//int a1 = 1;
	//for(int i =1; i <= 100; i++)
	//{
	//	int a = a0 + a1;
	//	printf("%d\n", a);
	//	a0 = a1;
	//	a1 = a;
	//}
	printf("%e\n%e\n",c,c/10);

	return 0;
}
