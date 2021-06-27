// Program to compute sum of digits of a given number.
#include <stdio.h>
 
int main()
{
    int n = 0;                    //Initialising the variable that will store the user input;
    int sum = 0;                 //The variable that will store the sum is initialised;
    
    scanf("%d",&n);             //Taking the input from the user and storing it in the variable n;
    
	while (n != 0)             //A loop that will run till n is not equal to 0;
   {
        sum = sum + n % 10;    // Statement that adds the digits from rigth to left;
        n = n / 10;            // Statement that changes the value of n in each iteration;
   } 
		
		    
    printf("%d ", sum);        // Printing the result;
    
    
    return 0;                     // Program ends;
     
}
