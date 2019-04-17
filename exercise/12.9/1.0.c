#include <stdio.h>
int units = 0;
void critic(void)
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d", &units);
}
int main(void)
{
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic();
	puts("You must have looked it up!");
	return 0;
}