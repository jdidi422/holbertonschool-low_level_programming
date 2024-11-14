#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure to represent a dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: This structure represents a dog with basic information
 * such as its name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
