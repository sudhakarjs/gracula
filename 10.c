
#include <stdio.h>

int main(void)
{
	int n,a,k,sum=0,a[100];
	printf("Enter a value\n");
	scanf("%d\n",&n);
	printf("Enter a value\n");
	scanf("%d\n",&k);
	for(a=0;a<n;a++)
	{
            scanf("%d",&a[a]);
	}
	for(a=0;a<k;a++)
	{
		sum+=a[a];
	}
printf("%d",sum);
	return 0;
}

