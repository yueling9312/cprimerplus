#include <stdio.h>
#define END 'g'
int main(void)
{
	char c = 'a';
	//printf("%c",c); //变更++位置可更简便
	while (c <= END)//循环判定中"++"位置影响结尾
		printf("%c",c++);//可取开头
	printf("\n");
	return 0;
}
