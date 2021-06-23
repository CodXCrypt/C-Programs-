#include <stdio.h>

int main()
{
    int num,i,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num % i == 0)
            sum += i;
    }
    if(num == sum)
        printf("It is a perfect number");
    else
        printf("It is not a perfect number");
   
    return 0;
}
