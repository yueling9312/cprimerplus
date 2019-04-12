#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "grant"
#define SIZE 40
char * my_getsp(char * st, int n)
{
	char * ret_val;
	ret_val = fgets(st, n, stdin);
	if (ret_val)//ret_val != NULL
	{
		char * ptr = strchr(st, '\n');
		if (ptr)
			*ptr = '\0';
	}
	return ret_val;
}
char * change_tol(char * st, int n)
{
	char * ptr = st;
	for (int i = 0; i < n; ++i)
	{
		if (*(st + i) == '\0')
			break;
		else
			*(ptr + i) = tolower(*(st + i));
	}
	return ptr;
}
int main(void)
{
	char try[SIZE];
	puts("Who is butied in Grant's tomb?");
	my_getsp(try, SIZE);	
	while (strcmp(change_tol(try, SIZE), ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		my_getsp(try, SIZE);
	}
	puts("That's right");
	return 0;
}