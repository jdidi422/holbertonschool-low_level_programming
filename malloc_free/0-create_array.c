#include <stdlib.h>
#include <cstddef>

/**
 * create_array - Creates an array of chars initialized to a char
 * @size: Array size
 * @c: Char to initialize with
 *
 * Return: Pointer to array, or NULL if size is 0 or malloc fails
 */


char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
