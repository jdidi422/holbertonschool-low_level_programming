#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int rassil, jdidi;
if (*needle == '\0')
{
return (haystack);
}
for (rassil = 0; haystack[rassil] != '\0'; rassil++)
{
for (jdidi = 0; needle[jdidi] != '\0'; jdidi++)
{
if (haystack[rassil + jdidi] != needle[jdidi])
{
break;
}
}
if (needle[jdidi] == '\0')
{
return (&haystack[rassil]);
}
}
return (NULL);
}
