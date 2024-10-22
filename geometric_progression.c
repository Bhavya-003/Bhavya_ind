#include<stdio.h>
int main ()
{
    int a ;
    int r ;
    int n ;
    int t ;
     
printf("Enter the first term of gp ");
scanf("%d",&a);
printf("Enter the the common ratio ");
scanf("%d",&r);
printf("Enter the no. of term ");
scanf("%d",&n);
t = a *r^(n-1);
printf("%d",t);
return 0;

}