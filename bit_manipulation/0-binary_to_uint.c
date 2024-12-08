#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Convertit une chaîne binaire en entier non signé.
 * @b: Chaîne de caractères contenant des '0' et '1'.
 * Return: La valeur entière convertie, sinon 0 en cas d'erreur.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0;
int i = 0;
if (!b)
return (0);
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);
decimal = decimal * 2 + (b[i] - '0');
i++;
}
return (decimal);
}
