/*
Enter size of matrix-->3

 Enter the elements of the array
4 7 0
2 5 8
4 3 8

 Matrix is
 4 7 0
2 5 8
4 3 8

 Tranpose of the matrix is
 4 2 4
7 5 3
0 8 8
*/
#include<stdio.h>

void main()

{
         int a[20][20],i,j,n;
         printf("Enter size of matrix-->");
         scanf("%d",&n);
           printf("\n Enter the elements of the array \n");
            for(i=0;i<n;i++)
            {
                        for(j=0;j<n;j++)
                        scanf("%d",&a[i][j]);
            }
            printf("\n Matrix is\n ");
            for(i=0;i<n;i++)
            {
                        for(j=0;j<n;j++)
                        {
                        printf("%d ",a[i][j]);
            }
			printf("\n");
            }
            printf("\n Tranpose of the matrix is\n ");
            for(j=0;j<n;j++)
            {
                        for(i=0;i<n;i++)
                        {
                        printf("%d ",a[i][j]);
            }
             printf("\n");
			 }

}
