/*AAAAA
  BBBB
  CCC
  DD
  E    */
#include<stdio.h>
void main()
{
    int n,x=65;
    printf("Enter the number of rows which should be less than 26.\n");
    start:
    scanf("%d",&n);

    if (n<27)
    {    
        for(int i = n; i > 0;i--)
        {
            for(int j = i;j > 0; j--)
            {
                printf("%c",x);
            }
            x +=1;
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input.\n");
        printf("Enter the number of rows again.\n");
        goto start;        
    }
}
