#include <stdio.h>
void print(char start, int line_no)
 {
	for(int j = 0 ; j < line_no; j++)
		printf("%c",start + j);
	printf("\n");
}

int main(void)
{
	const int line = 6;
	for(int i = 0; i < line; i++)
	{
		/*for(int j = 0, k = 'A' + i; j < i + 1; j++, k++)
			printf("%c",k);
	printf("\n");*/
		print('A' + i, i + 1);
 	}
	return 0;
}
