//sum of seven terms of factorial
#include<stdio.h>
void main()
{
	double fact=1,res=0;
	int i,n;
	printf("To calculate the sum of series 1/1!+2/2! ..till n/n! \n ");
	printf("Enter value of n\n");
	scanf("%d",&n);
	for(i=1;i<8;i++)
	{
		fact=fact*i;
		res+=i/fact;
	}
	printf("the sum of series 1/1!+2/2! ..till n/n! is %lf",res);
}
