#include <stdio.h>
int main(void)
{
	char ch;
	while ((ch = getchar())!= '#')
	{
		if (ch != '\n')
		{
			printf("Step 1\n");
		
			if (ch == 'h')
				printf("step 3\n");
			else if (ch != 'b' && ch != 'c')
			{	
				printf("step 2\n");
				printf("step 3\n");
			}
		}
	}
	printf("Done\n");
	return 0;
}
