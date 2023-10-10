#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - created a new dog
 * @name: type char pointer
 * @age: float value
 * @owner: type char pointer
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *husky;
	int i, j, k;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	husky = malloc(sizeof(dog_t));
	if (husky == NULL)
		return (NULL);

	for (i = 0 ; name[i] != '\0' ; i++)
		;
	for (j = 0 ; owner[j] != '\0' ; j++)
		;
	(*husky).name = malloc(sizeof(char) * i + 1);
	if ((*husky).name == NULL)
	{
		free(husky);
		return (NULL);
	}
	for (k = 0 ; k <= i ; k++)
		(*husky).name[i] = name[i];
	(*husky).age = age;
	(*husky).owner = malloc(sizeof(char) * j + 1);
	if ((*husky).owner == NULL)
	{
		free((*husky).name);
		free(husky);
		return (NULL);
	}
	for (k = 0 ; k <= j ; k++)
		(*husky).owner[k] = owner[k];
	return (husky);
}
