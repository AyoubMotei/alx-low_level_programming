C - Hash Tables
This project focuses on implementing hash functions and hash tables in C, providing an introduction to the concept of hashing.

Header File 📁
The project includes the header file hash_tables.h, which contains the necessary definitions and prototypes for all types and functions used in the project.

Data Structures
The project employs the following data structures:

Hash Node Structure
c
Copy code
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;
Hash Table Structure
c
Copy code
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
Sorted Hash Node Structure (Extra Task)
c
Copy code
typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;
Sorted Hash Table Structure (Extra Task)
c
Copy code
typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;
Function Prototypes
The project includes various C functions, each located in a separate file. The function prototypes are as follows:

File	Prototype
0-hash_table_create.c	hash_table_t *hash_table_create(unsigned long int size);
1-djb2.c	unsigned long int hash_djb2(const unsigned char *str);
2-key_index.c	unsigned long int key_index(const unsigned char *key, unsigned long int size);
3-hash_table_set.c	int hash_table_set(hash_table_t *ht, const char *key, const char *value);
4-hash_table_get.c	char *hash_table_get(const hash_table_t *ht, const char *key);
5-hash_table_print.c	void hash_table_print(const hash_table_t *ht);
6-hash_table_delete.c	void hash_table_delete(hash_table_t *ht);
100-sorted_hash_table.c	shash_table_t *shash_table_create(unsigned long int size);
100-sorted_hash_table.c	int shash_table_set(shash_table_t *ht, const char *key, const char *value);
100-sorted_hash_table.c	char *shash_table_get(const shash_table_t *ht, const char *key);
100-sorted_hash_table.c	void shash_table_print(const shash_table_t *ht);
100-sorted_hash_table.c	void shash_table_print_rev(const shash_table_t *ht);
100-sorted_hash_table.c	void shash_table_delete(shash_table_t *ht);
Tasks 📃
The project includes several tasks, each implemented in a separate file. Here's a summary of each task:

0. >>> ht = {}

File: 0-hash_table_create.c
Description: Creates a hash_table_t hash table.
Return:
On success: Returns a pointer to the newly created hash table.
On failure: Returns NULL.
1. djb2

File: 1-djb2.c
Description: Implements the djb2 hashing algorithm.
2. key -> index

File: 2-key_index.c
Description: Returns the index at which a key/value pair should be stored in the array of a hash_table_t hash table.
3. >>> ht['betty'] = 'cool'

File: 3-hash_table_set.c
Description: Adds an element to a hash_table_t hash table.
Conditions:
The parameter key cannot be an empty string.
Return:
On success: Returns 1.
On failure: Returns 0.
4. >>> ht['betty']

File: 4-hash_table_get.c
Description: Retrieves a value associated with a key in a hash_table_t hash table.
Return:
If the key cannot be found: Returns NULL.
If the key is found: Returns the associated value.
5. >>> print(ht)

File: 5-hash_table_print.c
Description: Prints a hash_table_t hash table.
Note: Prints each key/value pair in the order they appear in the array of the hash table.
Note: Does not print anything if the hash table is NULL.
6. >>> del ht

File: 6-hash_table_delete.c
Description: Deletes a hash_table_t hash table.
7. $ht['Betty'] = 'Cool' (Extra Task)

File: 100-sorted_hash_table.c
Description: Implements a sorted hash table shash_table_t, similar to hash_table_t, but with key/value pairs inserted in alphabetical order based on the ASCII value of the key.
Note: Key/value pairs are printed in the order they are sorted.
Note: Includes the function shash_table_print_rev() that prints the hash table in reverse order.
