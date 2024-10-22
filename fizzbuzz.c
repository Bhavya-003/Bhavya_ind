#include<stdio.h>
int main ()
{
    int x ;
    printf ("Enetr a number : ");
    scanf ("%d",&x);
    if (x%3==0 && x%5==0)
    printf("Fizzbuzz!");
    else if (x%3==0)
    printf("Fizz");
    else if (x%5==0)
    printf("Buzz");
    return 0;
}