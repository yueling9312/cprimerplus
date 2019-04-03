#include <stdio.h>
#include <string.h>
int main(void)
{
	int letters;
	char word[40];
	printf("请输入一个英文单词：");
	scanf("%s",word);
	letters = strlen(word);
	//printf("%d",letters);
	//printf("%s",word);

	for(int i = letters - 1; i >= 0; i--)
		printf("%c",word[i]);
	printf("\n");
	return 0;
}
