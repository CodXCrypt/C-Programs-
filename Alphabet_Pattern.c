/* 
A
B C
D E F
G H I J
K L M N O
*/

#include <stdio.h>

int main()
{
    int num,i=0,j,k;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(j=1;j<num+1;j++)
    {
        for(k=0;k<j;k++)
        {
            printf("%c ",(65 +i));
            i++;
        }
        printf("\n");
    }
   
    return 0;
}
