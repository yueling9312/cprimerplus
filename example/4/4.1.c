//talkback.c
#include <stdio.h>//printf()
#include <string.h>//strlen()
#define DENSITY 62.4//?
int main(void)
{
	float weight;
	float volume;
	int size;
	int letters;
	char name[40];//40个字符

	printf("Hi!What's your first name?\n");
	scanf("%s",name);//&name?
	
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	
	size=sizeof name;
	letters=strlen (name);
	volume=weight/DENSITY;
	
	printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);//2.2f?
	printf("Also,your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it in.\n",size);
	return 0;
}
