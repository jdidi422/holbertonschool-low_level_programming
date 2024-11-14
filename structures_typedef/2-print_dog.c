#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the information of a dog.
 * @d: Pointer to the dog to print.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.2f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
