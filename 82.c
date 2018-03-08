#include <stdio.h>

int main(void) 
{
	float k,b,a;
	printf("enter the kind and breadth values of the farm:");
	scanf("%f %f",&k,&b);
	a=k*b;
	printf("\n%0.5f",a);
	return 0;
}
