#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Macro definitions */

#define HASH_TABLE_INIT_SIZE 1024 /* Initial size of the hash table array */
#define HASH_TABLE_LOAD_FACTOR 0.75 /* Maximum load factor before resizing the hash table */
#define HASH_TABLE_GROWTH_FACTOR 2 /* Factor by which the hash table size is increased */



/* Data structures */

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

/* Enumerated types */

/* Status codes for hash table operations */
typedef enum hash_table_status
{
    HASH_TABLE_OK, /* Operation successful */
    HASH_TABLE_FAIL, /* Operation failed */
    HASH_TABLE_FULL, /* Hash table is full */
    HASH_TABLE_EMPTY, /* Hash table is empty */
    HASH_TABLE_KEY_EXISTS, /* Key already exists in hash table */
    HASH_TABLE_KEY_NOT_FOUND /* Key not found in hash table */
} hash_table_status_t;

/* Operation codes for hash table functions */
typedef enum hash_table_operation
{
    HASH_TABLE_GET, /* Get the value associated with a key */
    HASH_TABLE_SET, /* Set or update the value associated with a key */
    HASH_TABLE_DELETE, /* Delete a key/value pair from the hash table */
    HASH_TABLE_CLEAR, /* Clear the entire hash table */
    HASH_TABLE_RESIZE /* Resize the hash table array */
} hash_table_operation_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
char *hash_table_get(const hash_table_t *ht, const char *key);
hash_table_status_t hash_table_set(hash_table_t *ht, const char *key, const char *value);
void hash_table_delete(hash_table_t *ht);
hash_table_status_t hash_table_clear(hash_table_t *ht);
hash_table_status_t hash_table_resize(hash_table_t *ht, unsigned long int new_size);
void hash_table_print(const hash_table_t *ht);

/* Inline functions */

/**
 * hash_table_is_empty - Checks if a hash table is empty
 * @ht: The hash table
 * Return: 1 if empty, 0 otherwise
 */
static inline int hash_table_is_empty(const hash_table_t *ht)
{
    return (ht == NULL || ht->size == 0 || ht->array == NULL);
}

/**
 * hash_table_size - Returns the size of a hash table
 * @ht: The hash table
 * Return: The size of the array, or 0 if empty
 */
static inline unsigned long int hash_table_size(const hash_table_t *ht)
{
    return (hash_table_is_empty(ht) ? 0 : ht->size);
}

#endif /* HASH_TABLES_H */
