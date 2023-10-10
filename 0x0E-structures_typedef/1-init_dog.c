#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type 'struct dog'
 * @d: type struct pointer
 * @name: type char pointer
 * @age: float value
 * @owner: type char pointer
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
