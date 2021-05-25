/*
 enter the no of rows:5
*****
  *
 *
*
***** */
#include<stdio.h>
void main()
{
	int i,j,row;
	printf("\n enter the no of rows:");
	scanf("%d",&row);
	for( i=1;i<=row;i++)
	{
		for( j=1;j<=row;j++)
		{
			if(i==1 || i==row||i+j==row||i+j==row)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
