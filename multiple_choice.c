#include<stdio.h>

int main() {
    char ans1, ans2, ans3, ans4;
    int correct = 0;  // variable to keep track of correct answers

    printf("Which of the following methods are commonly used for improving the performance of\nmachine learning models?\n");
    printf("A. Regularization\n"); 
    printf("B. Data Augmentation\n");
    printf("C. Cross-validation\n");
    printf("D. Gradient Descent\n");


    printf("Is option A correct? (Y/N): ");
    scanf(" %c", &ans1); 
    printf("Is option B correct? (Y/N): ");
    scanf(" %c", &ans2);

    printf("Is option C correct? (Y/N): ");
    scanf(" %c", &ans3);

    printf("Is option D correct? (Y/N): ");
    scanf(" %c", &ans4);

    // Check answers USING ITERANTIONS
    if (ans1 == 'Y' || ans1 == 'y') correct++;
    if (ans2 == 'Y' || ans2 == 'y') correct++;
    if (ans3 == 'Y' || ans3 == 'y') correct++;
    if (ans4 == 'Y' || ans4 == 'y') correct++;

    // Display result
    if (correct > 0)
        printf("You got %d correct answer(s).\n", correct);
    else
        printf("No correct answers.\n");

    return 0;
}