#include "main.h"


/**
 * print_most_numbers - Prints numbers from 0 to 9, skipping 2 and 4
 *
 * This function prints the numbers from 0 to 9, except for 2 and 4.
 */
void print_most_numbers(void)
{
char print_numbers;
for (print_numbers = '0'; print_numbers <= '9'; print_numbers++)
{
if (print_numbers != '2' && print_numbers != '4')
{
_putchar(print_numbers);
}
}
_putchar('\n');
}
