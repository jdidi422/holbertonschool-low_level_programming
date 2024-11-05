#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard to print
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
unsigned int rassil, jdidi;
for (rassil = 0; rassil < 8; rassil++)
{
for (jdidi = 0; jdidi < 8; jdidi++)
{
_putchar(a[rassil][jdidi]);
}
_putchar('\n');
}
}
