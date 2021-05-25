/*
Find sum of left  and right diagonals of a matrix :
---------------------------------------
Input the size of the square matrix : 4
Input elements of matrix :
2
4
3
4
2
5
7
5
8
9
3
5
8
9
5
1
The matrix is :
   2   4   3   4
   2   5   7   5
   8   9   3   5
   8   9   5   1
Addition of the Right Diagonal elements is :11
Addition of the  left Diagonal elements is :28
*/
#include<stdio.h>
void main()
   {
     int i,j,a[50][50],sum=0,n,m=0,sum1;
	 
       printf("\n\nFind sum of left  and right diagonals of a matrix :\n");
       printf("---------------------------------------\n");	 
	 
	 printf("Input the size of the square matrix : ");
     scanf("%d", &n); 
         m=n;
	 printf("Input elements of matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           scanf("%d",&a[i][j]);
            }
        }  
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",a[i][j]);
	    printf("\n");
	 }
// calculate the sum of left diagonals
	 for(i=0;i<n;i++)
	 {
           m=m-1;
	   for(j=0;j<n ;j++)
            {
              if (j==m) 
                {
                  sum= sum+a[i][j];
                }
              
            }
	 }
	 //right diagnol  sum
	 for(i=0;i<n;i++)
	 {
           m=m-1;
	   for(j=0;j<n ;j++)
            {
              if (i==j) 
                {
                  sum1= sum1+a[i][j];
                }
              
            }
	 }
	  printf("Addition of the Right Diagonal elements is :%d\n",sum1);
       printf("Addition of the  left Diagonal elements is :%d\n",sum);
    }
