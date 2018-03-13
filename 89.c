#include<stdio.h>
void main()
{
    #include <stdio.h>

int main(void) 
{
	char c[10];
	int n,i;
	scanf("%s",c);
	n=strlen(c);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",c[i]);
	}
	
	return 0;
}
