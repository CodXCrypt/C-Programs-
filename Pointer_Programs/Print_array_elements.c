// WRITE A C PROGRAM TO INPUT AND PRINT THE ELEMENTS OF ARRAY USING POINTERS
#include<stdio.h>
int main()
{
 int arr[100],size;
 printf("Enter the size of array:");
 scanf("%d",&size);
 printf("Enter the elements of array:");
 for(int i=0;i<size;i++)scanf("%d",(arr+i));
 printf("You Entered the following elements:");
 for(int i=0;i<size;i++)printf("%d ",*(arr+i));
 return 0;
}