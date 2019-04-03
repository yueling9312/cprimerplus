#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	while ((ch = getchar()) != '#')
	{
		replay : if (ch == 'e')
		{
			switch (ch = getchar())
			{
				case 'i': count++;
					  break;
				case 'e': goto replay;
			//		  break;
				case '#': goto out;
			//		  break;
				default: break;
			}
		}			
		else	
			continue;
	}
	out : printf("有%d个ei\n",count);
	return 0;
}
