//3.10.9
#include <stdio.h>
int main(void)
{
	char ch;
	int a;
	ch='\r';
	a=ch;
	printf("ch=%c\nch=%d\n",ch,a);
	ch=13;
	a=ch;
	printf("ch=%c\nch=%d\n",ch,a);
	ch=015;
	a=ch;
	printf("ch=%c\nch=%d\n",ch,a);
	ch=0xd;
	a=ch;
	printf("ch=%c\nch=%d\n",ch,a);

	return 0;
}
