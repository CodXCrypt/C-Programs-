#include <stdio.h>

int main()
{
    int num, arr[100],i,j;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=0;num>0;i++)
    {
        arr[i] = num%2;
        num = num/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }

    return 0;
}
