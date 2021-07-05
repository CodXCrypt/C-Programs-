/*
enter the height5
*****
*   *
*   *
*   *
*****

*/
#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter the height of rectangle");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n)
			{
				printf("*");
			}
			else if(j==1||j==n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
