/* 
1
2 3
3 4 5
6 7 8 9
10 11 12 13 14 
*/

#include <stdio.h>

int main()
{
    int num,i=1,j,k;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(j=1;j<num+1;j++)
    {
        for(k=0;k<j;k++)
        {
            printf("%d ",i++);
        }
        printf("\n");
    }
   
    return 0;
}
