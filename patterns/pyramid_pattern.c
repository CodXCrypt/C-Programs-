/*
Enter the number of rows: 6
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
* * * * * * * * * * *
*/
#include <stdio.h>
void main() {
   int i, a, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++, k = 0) {
      for (a= 1; a <=rows-i; a++) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         k++;
      }
      printf("\n");
   }
   
}
