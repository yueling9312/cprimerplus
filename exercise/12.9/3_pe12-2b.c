#include <stdio.h>
#include "3_pe12-2a.h"
int main(void)
{
	int mode;
	int last_mode;
	char* MODE;
	double dist;
	double cons;
	printf("Enter 0 for metric mode, 1 for US mode:");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		MODE = get_mode(mode, &last_mode);
		get_info(MODE, &dist, &cons);
		show_info(MODE, &dist, &cons);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf("(-1 to quit):");
		scanf("%d", &mode);
	}
	puts("Done.");
	return 0;
}