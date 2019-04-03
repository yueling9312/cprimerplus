#include <stdio.h>
#include <string.h>
int main(void)
{
	int letters = 0;
	char s[255];
	char a;
	printf("请输入一句英文：");
	while(scanf("%c",&a) == 1 && a != '\n')
	{
		s[letters] = a;
		letters++;
	}
	for(int i = letters - 1; i >= 0; i--)
		printf("%c",s[i]);
	printf("\n");
	return 0;
}
