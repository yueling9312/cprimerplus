#include <stdio.h>
#define STLEN 80
char * strchr_blank(char * st)
{
	char * ret_val;
	//ret_val = strchr(st, ' ');string.hº¯Êý
	while (*st != ' ' && *st != '\n')
		++st;
	if (*st == ' ')
		ret_val = st;
	else
		ret_val = NULL;
	return ret_val;
}
int main(void)
{
	char words[STLEN] = "What a beautiful night! I wants to dancing with you!";	
	char * ptr = strchr_blank(words);
	printf("%c %c %c\n", *(ptr - 1), *ptr, *(ptr + 1));
	return 0;
}