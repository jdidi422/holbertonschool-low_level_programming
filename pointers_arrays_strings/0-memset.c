#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to fill.
*
 * Return: A pointer to the memory area s after filling.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int rassil;

for (rassil = 0; rassil < n; rassil++)
{
s[rassil] = b;
}
return (s);
}
