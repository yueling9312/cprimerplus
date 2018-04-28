//4.7.3
#include <stdio.h>
#include <string.h>
#define Q "\"His Hamlet was funny without being vulgar.\""
#define P "His Hamlet was funny without being vulgar."
int main(void)
{
	//4.7.9.e
	int e2;
	scanf("%*s %d",&e2);
	printf("%d\n",e2); 


	printf("%s\nhas %d characters %+.2f.\n",Q,strlen(Q),3.13);
	printf("\"%s\"\nhas %d characters.\n",P,strlen(P));//%可以不用反编译
	return 0;
}
