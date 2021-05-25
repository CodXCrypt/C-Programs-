/*  ****
    ***
    **
    *       */
#include <stdio.h>
void pattern(int x);
int main()
{
    int n;
    printf("Enter the number of rows ");
    scanf("%d",&n);
    pattern(n);  
    return 0;
}
void pattern(int x)
{
    int i,j;  
    for(i=x; i>=1; i--)
    {
      for(j=1; j<=i; j++)
      {
        printf("*");
      }
      printf("\n"); 
    }  
}
