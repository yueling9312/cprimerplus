#include <stdio.h>
#define STLEN 80
char * my_gets(char * st, int n)
{
	char * ret_val;

	ret_val = fgets(st, n, stdin);
	if (ret_val)//ret_val != NULL
	{
		while (*st != '\n' && *st != '\0')
			++st;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}

int strlen(char * st)
{
	int i = 0;
	while (st[i] != '\0')
			++i;
	return i;
}
int main(void)
{
	char words[STLEN];
	char text[2] = "a";
	puts("������һ�仰���ַ�������80����");
	my_gets(words, STLEN);
	puts(words);
	printf("words����%d���ַ�\n",strlen(words));
	printf("text����%d���ַ�\n", strlen(text));
	return 0;
}