#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The characters to match.
 *
 * Return: The number of bytes in the initial segment of `s` which consist
 *         only of characters from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int rassil, j;
for (rassil = 0; s[rassil] != '\0'; rassil++)
{
int found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[rassil] == accept[j])
{
found = 1;
break;
}
}
if (found)
{
count++;
}
else
{
break;
}
}
return (count);
}
