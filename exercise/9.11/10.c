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
	printf("��ֱ����������������ÿո���������еڶ��������ķ�ΧΪ[2,10]\n");
	while (scanf("%d %d", &a, &b) != 2 || b < 2 || b > 10)
	{
		printf("�����������������������������ÿո���������еڶ��������ķ�ΧΪ[2,10]\n");
	}
	printf("%d��%d������Ϊ", a, b);
	to_base_n(a, b);
	putchar('\n');
	return 0;
}