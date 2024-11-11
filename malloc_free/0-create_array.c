#include "main.h"
#include <stdio.h>
#include <stdlib.h>~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
/**
 * create_array
 * @size: the size of the array
 * @c: the character to initialize the array with
 * Return: Pointer to the initialized array or NULL if allocation fails
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
