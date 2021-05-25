#include<stdio.h>
//to find factorial
void main()
{
	long int num,a=1,i;
	printf("Enter the no to find the factorial");
	scanf("%d",&num);
	for(i=1;i<num;num--)
	{
		a=a*num;
		//decrementing value of num(num--;)
	}
	printf("\n factorial is %d",a);
}
