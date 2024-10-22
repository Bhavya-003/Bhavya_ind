#include <stdio.h>

int main() {
    int x, y;

    // Ask user to enter two numbers
    printf("Enter two numbers: \n");

    // Corrected scanf to read two integers
    scanf("%d %d", &x, &y);

    // Compare x and y and print which one is greater
    if (x > y)
        printf("%d is greater than %d\n", x, y);
    else
        printf("%d is greater than %d\n", y, x);

    return 0;
}