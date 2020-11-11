#include<stdio.h>
 int main()
 {
     int n, sum=0, i=0;
     printf("Enter n value: ");
     scanf("%d", &n);
     while(i<=n)
     {
       sum += i++;
     }
     printf("Sum of first %d natural numbers = %d", n, sum);
     return 0;
 }