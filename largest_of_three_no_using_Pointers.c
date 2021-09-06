#include <stdio.h>

int max(int x,int y) {

return x>y ? x : y;
}


int main()
{
    int a, b, c, *p1, *p2, *p3;

    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Enter Third Number: ");
    scanf("%d",&c);


    p1 = &a;
    p2 = &b;
    p3 = &c;

    int result  = max(*p1 , max(*p2 , *p3));

		printf("\n\n %d is the largest number", result );

    return 0;
}
