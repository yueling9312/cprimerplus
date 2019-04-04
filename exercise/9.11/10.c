#include <stdio.h>
void to_base_n(int x, int y)
{
	int a;
	a = x % y;
	if (x >= y)
		to_base_n(x / y, y);
	switch (a)
	{
		case 0: putchar('0');
			    break;
		case 1: putchar('1');
			break;
		case 2: putchar('2');
			break;
		case 3: putchar('3');
			break;
		case 4: putchar('4');
			break;
		case 5: putchar('5');
			break;
		case 6: putchar('6');
			break;
		case 7: putchar('7');
			break;
		case 8: putchar('8');
			break;
		case 9: putchar('9');
			break;
		default: break;
	}
}
int main(void)
{
	int a;
	int b;
	printf("请分别输入两个整数，用空格隔开，其中第二个整数的范围为[2,10]\n");
	while (scanf("%d %d", &a, &b) != 2 || b < 2 || b > 10)
	{
		printf("输入有误，请重新输入两个整数，用空格隔开，其中第二个整数的范围为[2,10]\n");
	}
	printf("%d在%d进制下为", a, b);
	to_base_n(a, b);
	putchar('\n');
	return 0;
}