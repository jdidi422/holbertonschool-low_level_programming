#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	char print_numbers;

	for (print_numbers = '0'; print_numbers <= '9'; print_numbers++)

	{
		_putchar(print_numbers);
	}
	_putchar('\n');
}
