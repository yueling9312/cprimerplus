#include <stdio.h>
void print(int count_null, int line_no)
 {
	for(int n = 0 ; n < count_null - line_no + 1; n++)
		printf(" ");
	for(int j = 0 ; j < line_no; j++)
		printf("%c",'A' + j);
	for(char k = 'A' - 1 + line_no - 1; k >=  'A'; k--)
		printf("%c",k);
	for(int n = 0 ; n < count_null - line_no + 1; n++)
		printf(" ");
	printf("\n");
}

int main(void)
{
	char line;
	printf("输入一个大写字母：");
	scanf("%c",&line);	
	for(int i = 0; i < line - 'A' + 1; i++)
	{
/*		for(int n = 0 ; n < line - line_no; n++)
			printf(" ");
		for(int j = 0 ; j < line_no; j++)
			printf("%c",'A' + j);
		for(char k = 'A' + j - 1; k < 0; k--)
			printf("%c",k);
		for(int n = 0 ; n < line - line_no; n++)
			printf(" ");
		
	printf("\n");*/
	//	printf("%d\n", line);
		print(line - 'A' + 1, i + 1);
 	}
	return 0;
}
	
