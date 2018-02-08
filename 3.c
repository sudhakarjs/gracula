#include <stdio.h>
#include<conio.h>
void main()
{
    char a;
    int yen,ney;
    clrscr();
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    yen=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
    ney=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
    if(yen||ney)
    printf("%c is a vowel.", a);
    else
    printf("%c is a consonant.", a);
    getch();
}
