#include<stdio.h>
void main()
{
int p,q,r,s,i;
printf("enter a number");
scanf("%d",&p);
for(i=0;i<n;i++)
{
q=pow(2,i);
if(q>p)
{
r=i;
break;
}
}
s=pow(2,r);
printf("\n%d",s);
}
