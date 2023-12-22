#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    hash_table_status_t status;

    ht = hash_table_create(1024);
    status = hash_table_set(ht, "betty", "cool");
    if (status == HASH_TABLE_OK)
        printf("Key/value pair added successfully\n");
    else
        printf("Failed to add key/value pair\n");
    return (EXIT_SUCCESS);
}
