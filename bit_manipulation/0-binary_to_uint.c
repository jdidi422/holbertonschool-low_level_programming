#include "main.h"
#include <stdio.h>

#include <stddef.h>

/**
 * binary_to_uint - Convertit un nombre binaire en unsigned int.
 * @b: Chaîne de caractères contenant des '0' et '1'.
 *
 * Return: Le nombre converti, ou 0 si un caractère invalide est trouvé
 *         ou si b est NULL.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int value = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
value = value << 1;
if (*b == '1')
value = value | 1;
b++;
}
return (value);
}
