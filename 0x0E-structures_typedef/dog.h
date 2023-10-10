#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the main structure of dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - new name for type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
