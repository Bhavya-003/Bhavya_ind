#include<stdio.h>
int main ()
{
    int a ,sum ;
    sum = 0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
        sum = sum +i*2 ;
    }
printf("%d is the sum ",sum);
return 0;
}