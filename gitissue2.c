#include<stdio.h> 
int main() 
{
int i,j,n; 
printf("ENTER THE NUMBER OF ROWS YOU WANT TO PRINT * PYRAMID PATTERN\n"); 
scanf("%d", &n); 
for(i = 1 ; i <= n ; i++) 
{
    for (j = 1 ; j <= 2*n-1 ; j++) 
{
      if (j >= n-(i-1) && j <= n+(i-1)) 
      { printf("*"); }
      else 
      {printf(" "); } 
} 
printf("\n");
}
