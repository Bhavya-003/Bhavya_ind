#include<stdio.h>

int main() {
    int operater;
    int a;
    int b;
    int ans;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\n-----> ");
    scanf("%d", &operater);

    if (operater == 1) {
        ans = a + b;
    } else if (operater == 2) {
        ans = a - b;
    } else if (operater == 3) {
        ans = a * b;
    } else if (operater == 4) {
        ans = a / b;
    }

    printf("%d is the answer", ans);

    return 0;
}
