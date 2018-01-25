#include <stdio.h>
 
int main()
{
   int h, s, num = 0, remainder;
 
   printf("Enter an integer\n");
   scanf("%d", &h);
 
   s = h;
 
   while (s != 0)
   {
      remainder = s % 10;
      num       = num + remainder;
      s         = s / 10;
   }
 
   printf("num of digits of %d = %d\n", h, num);
 
   return 0;
}
