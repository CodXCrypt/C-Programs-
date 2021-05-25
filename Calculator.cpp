
#include<stdio.h>
void main()
{
    char ch,f='y';
    int n,a,b,d,c=0,e=1;

    do
    {
        printf("Enter the operation to be perform(+,-,*,/,%)");
        fflush(stdin);
        scanf("%c",&ch);
        switch(ch)
        {
            case'+':
                 printf("\n How many numbers you want to add");
                 scanf("%d",&n);
                 for(a=1;a<=n;a++)
                 {
                     printf("Enter the number");
                     scanf("%d",&b);
                     c+=b;
                 }
                 printf("\n sum is:%d \n",c);
                 break;
            case'-':
                 printf("Enter the number from which you want to sub");
                 scanf("%d",&b);
                 printf("\n How many numbers you want to  sub from %d-",b);
                 scanf("%d",&n);
            
                 for(a=1;a<=n;a++)
                 {
                     printf("\n Enter the numbers to sub from %d-",b);
                     scanf("%d",&d);
                       b-=d;
                 }
                 printf("\n difference is:%d \n",b);
                 break;
            case'*':
                printf("\n How many numbers you want to multiply");
                scanf("%d",&n);
                 for(a=1;a<=n;a++)
                {
                     printf("Enter the number");
                     scanf("%d",&b);
                     e*=b;
                }
                printf("\n Ans is:%d \n",e);
                break;    
            case'/':
                   printf("Enter the number  which you want to divide");
                scanf("%d",&b);
                printf("Enter the number by which you want to divide %d-",b);
                scanf("%d",&a);
                n=b/a;
                printf("\n Ans is:%d \n",n);
                break;
            case'%':
                  printf("Enter the number  of which you want percentage");
                 scanf("%d",&b);
                 printf("how many percent you want to calculate ");
                 scanf("%d",&a);
                 e=b*a/100;
                 printf(" percentage amount is:%d \n",e);
                 break;
           
        }
        
		printf("Do you want to continue(y,n)");
         scanf("%d",&f); 
		 fflush(stdin);}while(f!='n');
}
