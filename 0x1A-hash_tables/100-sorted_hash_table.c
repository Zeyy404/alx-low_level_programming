#include "hash_tables.h"

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the array
 * Return: a pointer to the newly created sorted hash table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: the hash table you want to add or update key/value to it
 * @key: is the key (can not be an empty string)
 * @value: is the value to be associated with the key. (can be an empty sting)
 *              must be duplicated.
 * Return: 1 if succeeded, 0, otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *shash_node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->snext;
	}

	shash_node = malloc(sizeof(shash_node_t));
	if (shash_node == NULL)
		return (0);
	shash_node->key = strdup(key);
	if (shash_node == NULL)
	{
		free(shash_node);
		return (0);
	}
	shash_node->value = strdup(value);
	shash_node->next = ht->array[index];
	ht->array[index] = shash_node;
	if (ht->shead == NULL)
	{
		shash_node->sprev = NULL;
		shash_node->snext = NULL;
		ht->shead = shash_node;
		ht->stail = shash_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		shash_node->sprev = NULL;
		shash_node->snext = ht->shead;
		ht->shead->sprev = shash_node;
		ht->shead = shash_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		shash_node->sprev = tmp;
		shash_node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = shash_node;
		else
			tmp->snext->sprev = shash_node;
		tmp->snext = shash_node;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: is the key you're looking for
 * Return: the value associated with the element, or NULL if key not be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *shash_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	shash_node = ht->array[index];
	while (shash_node != NULL && strcmp(shash_node->key, key) != 0)
		shash_node = shash_node->next;

	if (shash_node == NULL)
		return (NULL);
	else
		return (shash_node->value);
}

/**
 * shash_table_print - prints a hash table
 * @ht: the hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *h_node;
	int first = 1;

	if (ht == NULL)
		return;
	h_node = ht->shead;
	printf("{");
	while (h_node != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", h_node->key, h_node->value);
		first = 0;
		h_node = h_node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: the hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *h_node;
	int first = 1;

	if (ht == NULL)
		return;
	h_node = ht->stail;
	printf("{");
	while (h_node != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", h_node->key, h_node->value);
		first = 0;
		h_node = h_node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *h_node, *tmp;

	if (ht == NULL)
		return;

	h_node = ht->shead;
	while (h_node != NULL)
	{
		tmp = h_node->snext;
		free(h_node->key);
		free(h_node->value);
		free(h_node);
		h_node = tmp;
	}
	free(ht->array);
	free(ht);
}
