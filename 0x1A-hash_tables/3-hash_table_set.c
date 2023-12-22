#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update key/value to it
 * @key: is the key (can not be an empty string)
 * @value: is the value to be associated with the key. (can be an empty sting)
             must be duplicated.
 * @Return: 1 if succeeded, 0, otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t * new_hash_node;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i] ; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
		return (0);
	new_hash_node->key = strdup(key);
	if (new_hash_node == NULL)
	{
		free(new_hash_node);
		return (0);
	}
	new_hash_node->value = strdup(value);
	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;

	return (1);
}
