#include <stdio.h>
 
int main ()

{
  int i, num, sum = 0

  printf("Enter an integer number\n");
  scanf("%d", &num);
  for (i = 1;i <= num; i++)
  {
    sum = sum + 1;
  }
  printf ("Sum of first %d natural numbers = %d\n", num, sum);

}