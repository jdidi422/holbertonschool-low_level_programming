#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string by allocating memory and copying the content
 *           of the original string into it.
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string or NULL if allocation fails or
 *         if str is NULL.
 */
char *_strdup(char *str)
{
int jdidi = 0, size = 0;
char *rassil;
if (str == NULL)
{
return (NULL);
}
while (str[size] != '\0')
{
size++;
}
char *rassil = malloc(size *sizeof(*tr) + 1);
if (rassil == NULL)
{
return (NULL);
}
while (jdidi < size)
{
rassil[jdidi] = str[jdidi];
jdidi++;
}
rassil[size] = '\0';
return (rassil);
}
