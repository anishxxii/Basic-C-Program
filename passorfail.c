#include <stdio.h>
// To Find students pass or fail.

int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 0 && marks < 30) {
        printf("Fail\n");
    } else if (marks >= 30 && marks <= 100) {
        printf("Pass\n");
    } else {
        printf("Invalid input. Please enter a number between 0 and 100.\n");
    }

    return 0;
}
