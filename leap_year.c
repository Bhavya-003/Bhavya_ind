#include<stdio.h>
int main ()
 {
    int input;
    printf("Enter a year ");
    scanf("%d",&input);
    if (input%4==0 )
    {
        printf("%d is a leap year",input);
    }
    else 
    {
        printf("%d is not a leap year ",input);
    }
    return 0;
 }