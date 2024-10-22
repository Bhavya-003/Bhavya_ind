#include<stdio.h>
int main ()
{
    int x ;
    int Unit;
    printf("Enter a number :");
    scanf ("%d",&x);
    if (x >0 )
    Unit = x%10 ;
    else 
    Unit = -(x%10);
    printf("The unit place of %d is %d",x , Unit);
    return 0 ;
}