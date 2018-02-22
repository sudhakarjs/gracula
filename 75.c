#include<stdio.h>
#include<string.h>

int main()
{
	int c,j,z;
	char s[1000];
	gets(s);
	c=strlen(s);

		z=c/2;
		s[z]='*';
		puts(s);
}
