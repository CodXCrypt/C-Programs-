/*to print  
input=6
output=
1
12
123
1234
12345
123456
*/
#include<stdio.h>
void main()
{
	int a,b,c,rows;
	printf("Enter the number of rows: ");
    scanf("%d", &rows);
	for(a=1;a<=rows;a++)
	{
		for(b=rows-1;b>a;b--)
		{
			printf(" ");
		}
		printf("\n");
        for(c=1;c<=a;c++)
             {
                printf("%d",c);
                
		
			 }
	}
}



