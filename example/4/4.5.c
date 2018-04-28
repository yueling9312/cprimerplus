#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
	printf("Some number limits for this system: \n");
	printf("Biggest int:%d\n",INT_MAX);
	printf("Smallest unsigned long :%lld\n",LLONG_MIN);//?unsigned  ?lld ?LONG_MIN
	printf("One byte = %d bits on this system.\n",CHAR_BIT);
	printf("Largest double: %e\n",DBL_MAX);
	printf("Smallest normal float:%e\n",FLT_MIN);
	printf("float precision =%d digits\n",FLT_DIG);
	printf("float epsilon =%e\n",FLT_EPSILON);
	printf("float 下边界 =%d\n",FLT_MIN_10_EXP);//为什么exercise 3.11 1.c中，下溢的边界为-46？

	return 0;
}
