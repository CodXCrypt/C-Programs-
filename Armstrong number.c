#include <stdio.h>
#include<math.h>

int check_armstrong(int);

int main()
{
    int num_1,num_2;
    printf("Enter first number : ");           
    scanf("%d",&num_1);
    printf("Enter second number : ");
    scanf("%d",&num_2);
    printf("\nThe armstrong numbers in the interval %d to %d are as follows: \n",num_1,num_2);
    for(int i=num_1;i<=num_2;i++)
    {
        if(check_armstrong(i)==1)                 
        {                                //checking whether the num is armstrong or
            printf("%d\n",i);            //if it is then printing its value.
        }
    }
    
}

int check_armstrong(int p)
{
    int temp,flag;                          
    temp=p;
    flag=p;
    int rem=0,total=0,count=0;
    while(p)                    //this while loop is for counting the total number of digits in the number
    {
        rem=p%10;
        p=p/10;
        count++;
    }
    rem=0;
    while(temp)                        //this while loop is for calculating the sum of digits raised to the total 
    {                                  //count of digits in the number as power
       rem=temp%10;
       total+=pow(rem,count);
       temp=temp/10;
    }
    if(total==flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}
