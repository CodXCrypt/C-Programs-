/* Factors of a number are all the numbers that divide a given number.
   Example : Factors of 15 are 1, 3, 5, 15.
*/

#include <stdio.h>

int main()
{
    int num,i;
    scanf("%d",&num);
    printf("The factors of %d are\n", num);
    for(i=1;i<=num/2;i++)
    {
        if(num % i == 0)
            printf(" %d ",i);
    }
    printf(" %d ",num);
   
    return 0;
}

/* Test Case :
   For Input as 60
   Output is :
   The factors of 60 are
    1  2  3  4  5  6  10  12  15  20  30  60
*/
