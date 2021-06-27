#include<stdio.h>
int Check_perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)return 1;
    return 0;
}
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(Check_perfect(n))printf("Yes,it is a perfect number");
    else printf("No it is not a perfect number");
}