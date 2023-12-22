#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *h_node;
	unsigned long int i;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		h_node = ht->array[i];
		while (h_node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", h_node->key, h_node->value);
			first = 0;
			h_node = h_node->next;
		}
	}
	printf("}\n");
}
