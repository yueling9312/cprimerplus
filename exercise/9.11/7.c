#include <stdio.h>
int is_abc(char ch)
{
	if (ch > 64 && ch < 91)
		return ch - 64;
	else if(ch > 96 && ch < 123)
		return ch - 96;
	return -1;
}
int main(void)
{
	char ch;

	while ((ch = getchar()) != EOF)
		printf("%d", is_abc(ch));
	putchar('\n');
	return 0;
}