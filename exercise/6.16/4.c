#include <stdio.h>
void print(int line_no) {
	for(int j = 0, k[j] = 'A'; j < line_no; j++)
			
		printf("%c",k);
	printf("\n");
}

int main(void)
{
	const int line = 6;
	char k[6];
	for(int i = 0; i < line; i++)
	{
		print(i + 1);
 	}
	return 0;
}
