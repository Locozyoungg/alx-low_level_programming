#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key. key can not be an empty string
 * @value: The value associated with the key. value must be duplicated. value can be an empty string
 * Return: HASH_TABLE_OK if it succeeded, HASH_TABLE_FAIL otherwise
 */
hash_table_status_t hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *node, *tmp;

    /* Check if the hash table, key, or value are NULL */
    if (ht == NULL || key == NULL || value == NULL)
        return (HASH_TABLE_FAIL);

    /* Check if the key is an empty string */
    if (strlen(key) == 0)
        return (HASH_TABLE_FAIL);

    /* Get the index of the key using the hash function and the modulo operator */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists in the hash table */
    tmp = ht->array[index];
    while (tmp != NULL)
    {
        /* If the key is found, update the value and return HASH_TABLE_OK */
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            if (tmp->value == NULL)
                return (HASH_TABLE_FAIL);
            return (HASH_TABLE_OK);
        }
        tmp = tmp->next;
    }

    /* If the key is not found, create a new node and add it to the hash table */
    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (HASH_TABLE_FAIL);

    /* Initialize the node fields with the key and value */
    node->key = strdup(key);
    if (node->key == NULL)
    {
        free(node);
        return (HASH_TABLE_FAIL);
    }
    node->value = strdup(value);
    if (node->value == NULL)
    {
        free(node->key);
        free(node);
        return (HASH_TABLE_FAIL);
    }

    /* In case of collision, add the new node at the beginning of the list */
    node->next = ht->array[index];
    ht->array[index] = node;

    /* Return HASH_TABLE_OK if the operation succeeded */
    return (HASH_TABLE_OK);
}
