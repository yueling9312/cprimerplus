#include <stdio.h>

void print(int line_no) {
	for(int j = 0; j < line_no; j++)
			printf("$");
	printf("\n");
}

int main(void)
{
	const int line = 5;
	for(int i = 0; i < line; i++)
	{
		print(i + 1);
 	}
	return 0;
}
