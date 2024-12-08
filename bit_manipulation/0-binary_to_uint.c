#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to a string containing 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there's an invalid character or NULL.
 */
unsigned int binary_to_uint(const char *b)
{

unsigned int result = 0;

if (b == NULL)

return (0);
for (int i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
result = result * 2 + (b[i] - '0');
}
 return (result);
}

