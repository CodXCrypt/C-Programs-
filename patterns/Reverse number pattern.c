/*This is a program to print following pattern.
12345
1234
123
12
1          */
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows.\n");
    scanf("%d",&n);

    for(int i = n;i > 0;i--)
    {
        for(int j = 1;j <= i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
