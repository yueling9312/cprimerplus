#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;
begin:  if ((ch = getchar())!= '#')
	{
		if (ch == '?')
		{
			printf("!");
			count++;
		}	      
		else if (ch == '!')
		{
			printf("!!");
			count++;
		}
		else
			printf("%c",ch);
		goto begin;
		
	}
	printf("进行了%d次替换\n",count);
	return 0;
}
