#include <stdio.h>

int main()
{
  int n ;
  int sum ;
  printf("Enter a number : ");
  scanf("%d",&n);
  sum = n*(n+1)/2;
  printf("The sum of first  %d natural numbers are %d",n,sum);
  return 0;
}