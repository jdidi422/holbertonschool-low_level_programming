#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to evaluate
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n);  /* Function declaration */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;  /* Get the last digit */

	/* Handle negative numbers */
	if (last_digit < 0)
	{
		last_digit = -last_digit;  /* Make it positive */
	}

	printf("%d\n", last_digit);  /* Print the last digit */
	return (last_digit);  /* Return the last digit */
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int number;
	int last_digit;

	number = -1234;  /* Example number */
	last_digit = print_last_digit(number);
	printf("Last digit is: %d\n", last_digit);
	return (0);
}

