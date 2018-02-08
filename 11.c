#include <stdio.h>
#include<conio.h>
void main()
{
    long long c;
    int count = 0;
    clrscr();

    printf("Enter an integer: ");
    scanf("%lld", &c);

    while(n!= 0)
    {

        c /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
    getch();
}
