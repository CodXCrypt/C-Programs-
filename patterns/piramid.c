/*This is a programe for following star pattern.
    *
   * *
  * * *
 * * * *     */
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows.\n");
    scanf("%d",&n);
    
    for(int i = 1;i <= n; i ++)
    {
        for(int j = 0; j < n-i; j ++)
        {
            printf(" ");
        }
        for(int j = 0; j < i; j ++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}
