#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments.
 * @n: the number of arguments.
 *
 * Return: the sum of all the arguments, or 0 if no arguments are provided.
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list args;
if (n == 0)
return (0);
va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, int);
va_end(args);
return (sum);
}
