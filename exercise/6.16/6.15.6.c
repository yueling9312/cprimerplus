//  表格(4*8)
#include <stdio.h>
int main(void)
{
	const int ROWS = 4;
	const int CHARS = 8;
	int i,n;
	char a;
	for	(i = 1; i <= ROWS; i++)
	{
		for	(n = 1, a = '$'; n <= CHARS; n++)
			printf("%c",a);
		printf("\n");
	}
	return 0;
}  
