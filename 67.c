#include <stdio.h>

int main(void) 
{
	int i;

	scanf("%d",&i);
	i+=1;
	while(i%10!=0)
	{
		i=i+1;
	}
	printf("\n%d",i);
	return 0;
}
