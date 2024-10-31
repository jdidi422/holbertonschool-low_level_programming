#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings up to n characters from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to append from src.
 * 
 * Return: A pointer to the destination string dest.
 */
char *_strncat(char *dest, const char *src, int n)
{
    // Initialize a pointer for the end of dest
    char *dest_end = dest;

    // Find the end of dest
    while (*dest_end != '\0')
    {
        dest_end++;
    }

    // Append at most n characters from src to dest
    for (int i = 0; i < n && src[i] != '\0'; i++)
    {
        *dest_end = src[i]; // Copy character from src to dest
        dest_end++;         // Move the pointer forward
    }
    *dest_end = '\0'; // Null-terminate the result

    return dest; // Return the concatenated string
}

