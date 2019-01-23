#include <stdio.h>
int main(void)
{
	int a;
	int b;
	
	printf("This program computes moduli.\n");
	//scanf("%d",&b);
	printf("Enter an integer to serve as the second operand:");
	scanf("%d",&b);
	//printf("%d\n",b);
	printf("Now enter the first operand:");
	scanf("%d",&a);
	//printf("%d\n",a);
	printf("%d %% %d is %d\n",a,b,a % b);

	printf("Enter next number for first operand(<= 0 to quit):");
	scanf("%d",&a);
	while (a > 0)
	{
		printf("%d %% %d is %d\n",a,b,a % b);
		printf("Enter next number for first operand(<= 0 to quit):");
		scanf("%d",&a);
	}	
	printf("Done\n");
	return 0;
}
