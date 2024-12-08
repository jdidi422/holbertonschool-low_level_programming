#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars representing a binary number.
 *
 * Return: The converted unsigned int value, or 0 if input is invalid.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i;
if (b == NULL)

return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' || b[i] != '1')
return (0);
num = num * 2 + (b[i] - '0');
}
return (num);
}
