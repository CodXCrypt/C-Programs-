/*how many terms you want in fibonacci series
6
fibonacci series is
0
1
1
2
3
5
8
13
*/
#include<stdio.h>
void main()
{
	int a,n,t1=0,t2=1,next_term;
	printf("how many terms you want in fibonacci series\n");
	scanf("%d",&n);
	printf("fibonacci series is \n");
	printf("%d",t1);
	printf("\n");
	printf("%d",t2);
	for(a=1;a<=n;a++)
	{
	    printf("\n");
		next_term=t1+t2;
		t1=t2;
		t2=next_term;
		printf("%d",t2);
		
		
	}
}
