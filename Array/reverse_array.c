
 /*
 
 enter the size of the array:5

 enter the 5 element  of the array:
 2 6 7 9 1

 The reverse array:
 1 9 7 6 2
 */
 
#include<stdio.h>
void main(){
	int array[20], b[20],size,i,s;
	printf("\n enter the size of the array:");
	scanf("%d",&size);
	printf("\n enter the %d element  of the array: \n ",size);
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	
	}
	s=size-1;
   for (i = 0; i <size; i++)
   {
     b[i]=array[s];
     s--;
   }
   	printf("\n The Reverse array: \n ");

   for (i = 0; i <size; i++)
   {
    printf("%d ",b[i]);
   }
}
	
