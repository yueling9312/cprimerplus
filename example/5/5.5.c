//指数增长
#include <stdio.h>
#define SQUARES 64
int main(void)
{
	const double CROP =2E16;
	int count =1;
	double total;
	double current;//底数会发生变化

	printf("square	grains	total	");
	printf("fraction of \n");
	printf("	added	grains	");
	printf("world total\n");
	
	total=current=1.0;
	printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total / CROP);//终止条件需要被取值
	
	while (count < SQUARES)
	{
		//printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total / CROP);\\终止条件不需要被取值
		count=count + 1;
		current=2.0 * current;
		total=total + current;

		printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total / CROP);//终止条件需要被取值
	}
	printf("That's all.\n");

	return 0;
}
