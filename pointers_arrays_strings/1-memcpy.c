#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int rassil;
for (rassil = 0; rassil < n; rassil++)
{
dest[rassil] = src[rassil];
}
return (dest);
}
