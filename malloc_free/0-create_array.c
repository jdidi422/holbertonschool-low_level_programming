#include <stdlib.h>

/**
 * create_array - Initializes an array of chars with a specific char
 * @size: Size of the array
 * @c: Char to initialize with
 *
 * Return: Pointer to the array, or NULL if size is 0 or allocation fails
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
