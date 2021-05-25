/*
Enter the number of rows: 6
123456
12345
1234
123
12
1

*/
#include<stdio.h>
void main()
{
	int a,b,rows;
	printf("Enter the number of rows: ");
    scanf("%d", &rows);
	for(a=rows;a>0;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
			
			
		}
		printf("\n");
	}
}
