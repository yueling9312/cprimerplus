#include <stdio.h>
void critic(int* ptr)
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d", ptr);
}
int main(void)
{
	int units = 0;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic(&units);
	puts("You must have looked it up!");
	return 0;
}