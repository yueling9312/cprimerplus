#include <stdio.h>
void print(int line_no) {
	for(int j = 0, k = 'F'; j < line_no; j++, k--)
			printf("%c",k);
	printf("\n");
}

int main(void)
{
	const int line = 6;
	for(int i = 0; i < line; i++)
	{
		print(i + 1);
 	}
	return 0;
}
