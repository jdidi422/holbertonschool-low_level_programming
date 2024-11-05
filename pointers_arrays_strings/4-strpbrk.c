#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int rassil, jdidi;
for (rassil = 0; s[rassil] != '\0'; rassil++)
{
for (jdidi = 0; accept[jdidi] != '\0'; jdidi++)
{
if (s[rassil] == accept[jdidi])
{
return (&s[rassil]);
}
}
}
return (NULL);
}
