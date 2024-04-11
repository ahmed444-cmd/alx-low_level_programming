#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash array
 * @key: The key(unique)
 * @value: The value corresponding to a key
 * @next: A pointer to the next nd of the Lst
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash array data struct
 * @size: The array's size
 * @array: An array of @size
 * All cells of this array is a pointer to the first nd of a lnkd lst
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Nd of a sorted hash array
 * @key: The key(string)& unique
 * @value: The key's value
 * @next: A pointer to the next nd of the Lst
 * @sprev: A pointer to the previous elemnt of the sorted lnkd lst
 * @snext: A pointer to the next elemnt of the ordered lnkd lst
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Ordered hash array data structure
 * @size: The size of the array
 * @array: An array @size
 * all cells of this array is a pointer to the first nd of a lnkd lst
 * @shead: A pointer to the first elemnt of the ordered lnkd lst
 * @stail: A pointer to the last elemnt of the ordered lnkd lst
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
