//printf()中的*
#include <stdio.h>
int main(void)
{
	unsigned width;
	unsigned precision;
	int number = 256;
	double weight =242.5;

	printf("What field width?\n");
	scanf("%d",&width);//用scan（）为printf（）中的*赋值
	printf("The number is:%*d:\n",width,number);
	
	printf("Now enter a width and a precision:\n");
	scanf("%d %d",&width,&precision);
	printf("weight = %*.*f\n",width,precision,weight);

	return 0;
}
