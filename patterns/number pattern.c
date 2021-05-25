/*This is a program to print following pattern.
1
12
123
1234
12345    */
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows.\n");
    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
