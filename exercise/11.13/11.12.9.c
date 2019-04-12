#include <stdio.h>
#define STLEN 80
char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);
	if (ret_val)//ret_val != NULL
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] == '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
char * my_gets(char * st, int n)
{
	char * ret_val;
	
	ret_val = fgets(st, n, stdin);
	if (ret_val)//ret_val != NULL
	{
		while (*st != '\n' && *st != '\0')
			++st;
		if (*st == '\n')
			*st == '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
int main(void)
{
	char words[STLEN];
	puts("请输入一句话，字符不超过80个：");
	s_gets(words, STLEN);
	puts(words);
	my_gets(words, STLEN);
	puts(words);

	return 0;
}