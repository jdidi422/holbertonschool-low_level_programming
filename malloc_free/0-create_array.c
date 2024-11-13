#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with a specific
 *                character.
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: Pointer to the initialized array, or NULL if allocation fails
 */
char *create_array(unsigned int size, char c)
{
char *n = malloc(size * sizeof(char));
if (size == 0 || n == NULL)
return (NULL);
while (size--)
n[size] = c;
return (n);
}
