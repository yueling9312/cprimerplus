#include <stdio.h>
#define CH '*'
void chline(char ch, int i, int j)
{
	for (int i1 = 0; i1 < j; i1++)
	{
		for (int j1 = 0; j1 < i; j1++)
			putchar(ch);
		putchar('\n');
	}
}
int main(void)
{
	int a = 3;
	int b = 10;
	chline(CH, a, b);
	return 0;
}