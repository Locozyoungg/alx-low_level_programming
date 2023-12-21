#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table, or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int i;

    /* Allocate memory for the hash table structure */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* Initialize the size and array fields of the hash table */
    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    /* Initialize each element of the array to NULL */
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    /* Return the pointer to the hash table */
    return (ht);
}
