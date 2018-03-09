#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("\n enter the two value");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("%d",c);
    if(sqrt(c)==a&&sqrt(c)==b)
    
        printf("yes");

    else
    printf("no");
}


