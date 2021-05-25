#include<stdio.h>
void main(){
	int a[20], b[20],c[60],size1,i,size2,size,k,j;
	printf("\n enter the size of the first array:");
	scanf("%d",&size1);
	printf("\n enter the element of the first array :"); 
	for(i=0;i<size1;i++){
		scanf("%d",&a[i]);
	}
		for(i=0;i<size1;i++){
		c[i]=a[i];
	}
	printf("\n enter the size of the second array:");
	scanf("%d",&size2);
	printf("\n enter the element  of the seccond array: \n ");
	for(j=0;j<size2;j++){
		scanf("%d",&b[j]);
		
	}
	size=size1+size2;
	for(k=size1;k<=size;k++){
		c[k]=b[k-size1];	
			
	}
		printf("\n Combined Array is \n ");
	for(k=0;k<size;k++){
			
	printf("%d ",c[k]);	
	}
	
	

}
	
