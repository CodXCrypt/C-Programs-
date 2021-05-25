/*source code of summation of 3x3 matrix c program*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int matA[3][3],matB[3][3],matC[3][3];
 int r,c,k;
 for(r=0; r<3; r++)
 {
  for(c=0; c<3; c++)
  {
    printf("Enter first matrix : ");
    scanf("%d", &matA[r][c]);
  }
 }
 for(r=0; r<3; r++)
 {
  for(c=0; c<3; c++)
  {
    printf("Enter second matrix : ");
    scanf("%d", &matB[r][c]);
  }
 }
 for(r=0; r<3; r++)
 {
  for(c=0; c<3; c++)
  {
    matC[r][c]=0;
    for(k=0; k<3;k++)
       matC[r][c] = matA[r][c] + matB[r][c];
  }
 }
 printf("\n New matrix summation: \n"); 
 for(r=0; r<3; r++)
 {
  for(c=0; c<3; c++)
     printf(" %d",matC[r][c]);
  printf("\n");
 }
 getch();
 return 0;
}
