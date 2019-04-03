#include <stdio.h>
int main(void)
{
	int ch;
	int count = 0;
	while(ch = getchar() != EOF)
		count++;
	printf("%d\n",count);
/*	int i = 5;
	printf("%d\n",i++ + ++i);
	printf("%d\n",i);


	0 && i++;
	1 || i++;
	printf("%d\n",i);*/
	return 0;
}
