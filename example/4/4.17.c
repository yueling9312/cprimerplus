#include <stdio.h>
int main(void)
{
	int n;
	
	scanf("%*d %*d %d",&n);//scanf()中的*，跳过取值
	printf("The last integer was %d\n",n);
	return 0;
}
