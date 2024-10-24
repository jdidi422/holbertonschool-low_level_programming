#include "main.h"

int main(void) {
    // String to print
    char str[] = "_putchar\n"; 
    for (int i = 0; str[i] != '\0'; i++) {
        _putchar(str[i]); // Print each character
    }

    return 0; // Return 0 to indicate successful completion
} // Ensure there's a newline after this line