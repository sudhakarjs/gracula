#include <stdio.h>
int main(void)
{
 int s=10,i;
 char s[300];
 gets(s);
 
 for(i=0;i<=s;i++)
 {
     printf("%c",s[i]);
 }
 return 0;
}
