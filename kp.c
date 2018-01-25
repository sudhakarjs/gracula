#include <stdio.h>
 
int main() 
{
    int array[100], minimum, num, c, location = 1;
 
    printf("Enter the number of elements in array\n");
    scanf("%d",&num);
 
    printf("Enter %d integers\n", num);
 
    for ( c = 0 ; c < num ; c++ )
        scanf("%d", &array[c]);
 
    minimum = array[0];
 
    for ( c = 1 ; c < num ; c++ ) 
    {
        if ( array[c] < minimum ) 
        {
           minimum = array[c];
           location = c+1;
        }
    } 
 
    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);
    return 0;
}
