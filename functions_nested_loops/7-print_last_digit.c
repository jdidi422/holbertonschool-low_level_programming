#include <stdio.h>

int print_last_digit(int n) {
    int last_digit = n % 10;  // Get the last digit

    // Handle negative numbers
    if (last_digit < 0) {
        last_digit = -last_digit;  // Make it positive
    }

    printf("%d\n", last_digit);  // Print the last digit
    return last_digit;  // Return the last digit
}

int main() {
    int number = -1234;
    int last_digit = print_last_digit(number);
    printf("Last digit is: %d\n", last_digit);
    return 0;
}

