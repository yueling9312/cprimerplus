#include <stdio.h>
int main(void)
{
	char ch;
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	while ((ch = getchar())!= '#')
	{
		if (ch == ' ')
			a1++;
		else if (ch == '\n')
			a2++;
		else
			a3++;
	}	
	printf("%d个空格，%d个换行符，%d个其他字符\n",a1, a2, a3);
	return 0;
}
