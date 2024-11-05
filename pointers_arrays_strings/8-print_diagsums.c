#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: pointer to the first element of the square matrix
 * @size: size of the square matrix
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int rassil;
for (rassil = 0; rassil < size; rassil++)
{
sum1 += *(a + rassil * size + rassil);
sum2 += *(a + rassil * size + (size - 1 - rassil));
}
printf("%d, %d\n", sum1, sum2);
}