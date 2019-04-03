#include <stdio.h>

int frined_count(int week_number){
		if(week_number == 0) return 5;
		return (frined_count(week_number - 1) - week_number) * 2;
}

int main(void)
{
	int i = 1;
	while(frined_count(i) <= 150) {
		printf("第%d周%6d\n",i,frined_count(i));
		i++;
	}
//	for(int i = 1, sum = 5;2 * (sum - i) <= 150; i++)
//	{
//		sum = 2 * (sum - i);
//		printf("第%d周%6d\n",i,sum);
//	}
	return 0;
}
