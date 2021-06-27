#include<stdio.h>
//Need to include the following statements in same manner
#define decode(m,a,i,n) m##a##i##n
#define go decode(m,a,i,n)

int go()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    printf("You have just executed your first program without making use of main() function!\n");
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
