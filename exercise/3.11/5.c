#include <stdio.h>
int main(void)
{
	int a;
	printf("Enter your age:");
	printf("__\b\b"); 
	scanf("%d",&a);
	printf("You have lived %e seconds!\n",a*3.156e7);
	return 0;
}

