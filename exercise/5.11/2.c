#include <stdio.h>
int main(void)
{
	int a;
	int b;
	printf("请输入一个整数：\n");
	scanf("%d",&a);
	b=a+10;
	while(a <= b){
		printf("%d\n",a);
		++a;
	}
	return 0;
}
