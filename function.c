#include <stdio.h>
int main()
{
	int a=0,b;
	char s[100];
	printf(" enter the string \n");
	scanf("%s",s);
	for(b=0;s[b]!=NULL;b++)
	{
	a=a+1;
	}
	printf("%d",a);
	return 0;
}
