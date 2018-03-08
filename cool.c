#include <stdio.h>

int main()
{
 
 int b1,b2,i,t;
 for(i=0;i<3;i++)
 {
 scanf("%d %d",&b1,&b2);
  if(b1>b2)
   printf("%d",b1-b2);
   else
   printf("%d",b2-b1);
 }

}
