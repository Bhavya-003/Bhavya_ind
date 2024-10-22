#include<stdio.h>
int main ()
{int x;
printf("Enetr a number : ");
scanf("%d",&x);
if (x==0)
printf("Your number is Zero");
else if (x > 0)
printf("Your number is positive ");
else
printf("Your number is negative");
return 0;
}