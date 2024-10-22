#include<stdio.h>
int main ()
{
float a ;
float d; 
float n; 
int t ;
printf("Enther the first term of an AP ");
scanf("%f",&a);
printf("Enter the common difference ");
scanf("%f",&d);
printf("Enter a Nth term of the AP :");
scanf("%f",&n);
t = a+(n-1)*d ;
printf("%d is the %.0fth term of the AP ",t,n);// we take n as whole number for the refenrce
return 0;
}
