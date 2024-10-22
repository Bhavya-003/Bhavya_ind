#include <stdio.h>
#include <string.h>

int main() {
    char A[10];
    int graph_height1;
    int graph_height2;
    int graph_height3;

    printf("Enter The class: ");
    scanf("%s", A);

    if (strcmp(A, "Cat") == 0) {
        graph_height1 = 10;
        printf("%d", graph_height1);
    } else if (strcmp(A, "Dog") == 0) {
        graph_height2 = 10;
        printf("%d", graph_height2);
    } else if (strcmp(A, "Suar") == 0) {
        graph_height3 = 10;
        printf("%d", graph_height3);
    }

    return 0;
}