/*    *
     * *
    * * *
   * * * *  */
 
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
  int i, j;
  for(i=1; i<=x; i++)
  {
      for(j=1; j<=x; j++)
      {
          if(j<=x-i || j>x+i)
          {
              printf(" ");
          }
          else
          {
              printf("* ");
          }
      }
      printf("\n");
  }
}
