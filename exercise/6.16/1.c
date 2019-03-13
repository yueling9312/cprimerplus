#include <stdio.h>
int main(void)
{
	const int alpha_count = 26;
	char a[alpha_count];

	for(int i = 0; i < alpha_count; ++i) {
		a[i] = 'a' + i;
	}

	for(int i = 0; i < alpha_count; ++i) {
		printf("%c", a[i]);
	}
//	for (int count = 0,  b = 'a'; count < 25,b < 'z' + 1; count++,b++)
//		{
//			a[count] = b;
//			printf("%c",a[count]);
//		}
	printf("\n");
	return 0;
}
