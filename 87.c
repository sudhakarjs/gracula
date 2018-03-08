#include <stdio.h>
int main(void) 
{
int a1, a2,gcd;
scanf("%d %d", &a1, &a2);
for(int i=1; i <= a1 && i <= a2; ++i)
{
        
  if(a1%i==0 && a2%i==0)
            gcd = i;
    }

printf("%d",gcd);

	return 0;
}


