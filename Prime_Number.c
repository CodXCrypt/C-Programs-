// Prime Numbers between 2 interval

#include<stdio.h>

int main()
{
  int a,b, check;
  int dum = 1;

  printf("Enter the range of values \n");
  printf("The Start : ");
  scanf("%d", &a);
  printf("The End : ");
  scanf("%d", &b);

  printf("\n The Prime Numbers from %d to %d \n", a, b);

  for (int i = a; i<=b; i++)
  {
    check = 0;

    if (i <= 1)
      continue;

    else if (i == 2)
      check = 0;

    else
    {
      for (int j = 2; j<=(i/2)+1; j++)
      {
        if (i%j == 0)
        {
          check = 1;
          break;
        }
      }
    }

    if (check == 0)
    {
      printf("%d\t", i);
      dum++;
    }

    if (dum%6 == 0)
    {
      printf("\n");
      dum = 1;
    }
  }
}
