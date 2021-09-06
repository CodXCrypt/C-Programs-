// PROGRAM TO COPY ONE ARRAY TO ANOTHER ARRAY USING POINTERS
#include<stdio.h>
void copy(int *arr1,int *arr2,int n)
{
    int i;
    for(i=0;i<n;i++){
     *(arr2+i)=*(arr1+i);
    }
}
int main()
{
  int arr1[100],arr2[100],n,i;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("Enter the elements of array:");
  for(i=0;i<n;i++)scanf("%d",arr1+i);
  copy(arr1,arr2,n);
  for(i=0;i<n;i++)printf("%d ",arr2[i]);
  return 0;
}