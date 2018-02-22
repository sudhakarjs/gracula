#include<stdio.h>
void main()
{
int b;
char ch[10];
printf("enter the string");
scanf("%s",&ch);
for(i=0;ch[i]!=0;i++)
{
if((ch[i]=='b')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u'))
{
printf("vowel");
}
else
{
printf("not a vowel");
}
}
