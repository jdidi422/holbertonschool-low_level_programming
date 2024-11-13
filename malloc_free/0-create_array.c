#include "main.h"

/**
 * create_array - Creates an array of chars,initializes it with a specific char
 * @size: The size of the array.
 * @c: The character to initialize each element of the array with.
 *
 * Return: A pointer to the array,or NULL if size = 0 or memory alloc fails.
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = (char *)malloc(size * sizeof(char));


if (arr == NULL)
return (NULL);


for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
