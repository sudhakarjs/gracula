#include<stdio.h>
void main()
{

    int i,j,k;
    printf("enter the number:");
    scanf("%d %d",&i,&j);
    k=i-j;
    if(k%2==0)
    {

        printf("even");
    }
    else
    {
        printf("odd");
    }
}
