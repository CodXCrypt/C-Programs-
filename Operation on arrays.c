//Find the Union and Intersection of two sorted arrays.
#include <stdio.h>

void operations_on_array(int arr1[],int arr2[],int m,int n);

int main()
{
    printf("Implementing union and intersection of two sorted arrays: \n");
    int m,n;
    printf("Enter the size of first array : ");
    scanf("%d",&m);
    printf("Enter the elememts of first array (in sorted manner): \n");
    int arr1[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array : ");
    scanf("%d",&n);
    printf("Enter the elememts of second array (in sorted manner): \n");
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    printf("The arrays are as follows: \n");
    printf("Array 1: \n");
    for(int i=0;i<m;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("Array 2: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    
    operations_on_array(arr1,arr2,m,n);
    
    return 0;
}

void operations_on_array(int arr1[],int arr2[],int m,int n){
    printf("\nIntersection : ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d ",arr1[i]);
            }
        }
    }
    printf("\nUnion : ");
    int i=0,j=0;
    while(i<m,j<n)
    {
        if(arr1[i]<arr2[j])
        {
            printf("%d ",arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            printf("%d ",arr2[j]);
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            printf("%d ",arr1[i]);
            i++;
            j++;
        }
    }
    while(i<m)
    {
          printf("%d ",arr1[i]);
          i++;
    }
    while(j<n)
    {
         printf("%d ",arr2[j]);
         j++;
    }
}
