#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 *
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
    /* Create an unsigned integer with value 1 */
    unsigned int i = 1;

    /* Get a pointer to the first byte of i */
    char *c = (char *) &i;

    /* If the value of the first byte of i is 1, the machine is little-endian */
    /* Otherwise, the machine is big-endian */
    return (*c);
}

