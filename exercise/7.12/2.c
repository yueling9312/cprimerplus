#include <stdio.h>
int main(void)
{
	char ch;
	int count_char = 0;
	while ((ch = getchar())!= '#')
	{
		count_char++;
		printf("%c-%3d  ",ch, ch);
		if (count_char % 8 == 0)
			printf("\n");
	}
	printf("\n");
	return 0;
}
