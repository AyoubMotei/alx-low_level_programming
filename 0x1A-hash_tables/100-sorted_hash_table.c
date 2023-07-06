#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table with a given size
 *
 * @size: size of the shash table
 * Return: the created shash table, or NULL if function fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    shash_node_t **array;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return NULL;

    array = malloc(sizeof(shash_node_t *) * size);
    if (array == NULL)
        return NULL;

    for (i = 0; i < size; i++)
        array[i] = NULL;

    ht->array = array;
    ht->size = size;
    ht->shead = NULL;
    ht->stail = NULL;

    return ht;
}

/**
 * add_n_shash - adds a node at the beginning of a shash at a given index
 *
 * @head: head of the shash linked list
 * @key: key of the shash
 * @value: value to store
 * Return: created node
 */
shash_node_t *add_n_shash(shash_node_t **head, const char *key, const char *value)
{
    shash_node_t *current;

    current = *head;

    while (current != NULL)
    {
        if (strcmp(key, current->key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return current;
        }
        current = current->next;
    }

    current = malloc(sizeof(shash_node_t));

    if (current == NULL)
        return NULL;

    current->key = strdup(key);
    current->value = strdup(value);
    current->next = *head;

    *head = current;

    return current;
}

/**
 * add_i_shash - adds a node on the sorted DLL of the shash table
 *
 * @ht: pointer to the table
 * @new_node: new node to add
 * Return: no return
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new_node)
{
    shash_node_t *current, *prev;
    int result;

    current = prev = ht->shead;

    while (current != NULL)
    {
        result = strcmp(new_node->key, current->key);
        if (result == 0)
        {
            return;
        }
        else if (result < 0)
        {
            new_node->sprev = current->sprev;

            if (current->sprev)
                current->sprev->snext = new_node;
            else
                ht->shead = new_node;

            current->sprev = new_node;
            new_node->snext = current;

            return;
        }
        prev = current;
        current = current->snext;
    }

    new_node->sprev = prev;
    new_node->snext = NULL;

    if (ht->shead)
        prev->snext = new_node;
    else
        ht->shead = new_node;

    ht->stail = new_node;
}

/**
 * shash_table_set - adds a hash (key, value) to a given shash table
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node;

    if (ht == NULL)
        return 0;

    if (key == NULL || *key == '\0')
        return 0;

    index = key_index((unsigned char *)key, ht->size);

    new_node = add_n_shash(&(ht->array[index]), key, value);

    if (new_node == NULL)
        return 0;

    add_i_shash(ht, new_node);

    return 1;
}

/**
 * shash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * Return: value of the shash.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *current;

    if (ht == NULL)
        return NULL;

    if (key == NULL || *key == '\0')
        return NULL;

    index = key_index((unsigned char *)key, ht->size);

    current = ht->array[index];

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return current->value;
        current = current->next;
    }

    return NULL;
}

/**
 * shash_table_print - prints the keys and values of the shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;
    char *separator;

    if (ht == NULL)
        return;

    printf("{");
    separator = "";

    current = ht->shead;

    while (current != NULL)
    {
        printf("%s'%s': '%s'", separator, current->key, current->value);
        separator = ", ";
        current = current->snext;
    }

    printf("}\n");
}

/**
 * shash_table_print_rev - prints the keys and values of the shash table
 * in reverse
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;
    char *separator;

    if (ht == NULL)
        return;

    printf("{");
    separator = "";

    current = ht->stail;

    while (current != NULL)
    {
        printf("%s'%s': '%s'", separator, current->key, current->value);
        separator = ", ";
        current = current->sprev;
    }

    printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *current, *next;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current != NULL)
        {
            next = current->next;
            free(current->key);
            free(current->value);
            free(current);
            current = next;
        }
    }

    free(ht->array);
    free(ht);
}

