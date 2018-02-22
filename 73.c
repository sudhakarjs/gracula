#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  scanf("%d %d",&c,&b);
  if(a>c && a<b)
   printf("yes");
   else
   printf("no");  
}
return 0;
}
