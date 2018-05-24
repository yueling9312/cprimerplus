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

//3.10.6
	double b=0x5.b6p12;
	double c=0x1.6d8p14;
	printf("%la\n",b);
	printf("%lf\n",b);
	printf("%lf\n",c);

	return 0;
}
