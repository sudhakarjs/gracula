#include <stdio.h>

int main()
{
  int a1,a2,i;
  char c;
  for(i=0;i<4;i++)
  {
      scanf("%d%c%d",&a1,&c,&a2);
      if(c=='/')
      {
          printf("%d\n",(a1/a2));
      }
      else
      {
          printf("%\n",(a1%a2));
      }
  }
}
