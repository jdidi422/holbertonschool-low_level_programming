#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to locate in the string.
 *
 * Return: A pointer to the first occurrence of the character c in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
int rassil;
for (rassil = 0; s[rassil] >= '\0'; rassil++)
{
if (s[rassil] == c)
{
return (s + rassil);
}
}
return ('\0');
}
