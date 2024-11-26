#include <stdio.h>
// To find number is odd or even.

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

     if ( number %2 == 0 ) {
        printf("even \n");

     } else {
        printf("odd \n");
     }
      return 0;
}