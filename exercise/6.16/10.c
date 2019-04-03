#include <stdio.h>
int calculator(int n, int m);
int main(void)
{
	int min, max;
	printf("Enter lower and upper integer limits:");
	scanf("%d %d",&min, &max);
	while(min < max)
	{
		printf("The sums of the squares from %d to %d is %d\n",min * min, max * max, calculator(min, max));
		printf("Enter the next set of limits:");
		scanf("%d %d",&min,&max);
	}
	printf("Done\n");
	return 0;
}
int calculator(int n,int m)
{
	int sum = 0;
	for(int i = n; i <= m; i++)
	{
		sum = sum + i * i;
	}
	return sum;
}
