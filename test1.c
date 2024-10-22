#include <stdio.h>

int main()
{
  int n ;
  int sum ;
  printf("Enter a number : ");
  scanf("%d",&n);
  sum = n*(n+1)/2;
  printf("The sum on %d numbers are %d",n,sum);
  return 0;
}